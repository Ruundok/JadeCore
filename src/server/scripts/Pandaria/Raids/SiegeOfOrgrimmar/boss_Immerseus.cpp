/*
 * Copyright (C) 2013-2016 JadeCore <https://www.jadecore.tk/>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2011-2016 Project SkyFire <http://www.projectskyfire.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "siege_of_orgrimmar.h"

enum Texts
{
    
};

enum Spells
{
    
};

enum Events
{
    
};

class boss_Immerseus : public CreatureScript
{
    public:
        boss_Immerseus() : CreatureScript("boss_Immerseus") { }

        struct boss_ImmerseusAI : public ScriptedAI
        {
            boss_ImmerseusAI(Creature* creature) : ScriptedAI(creature)
            {
                
            }

            EventMap events;

            void Initialize()
            {
                
            }

            void Reset() override
            {
                
            }

            void KilledUnit(Unit* victim) override
            {
                
            }

            void JustDied(Unit* /*killer*/) override
            {
                
            }

            void EnterCombat(Unit* /*who*/) override
            {
                
            }

            void MoveInLineOfSight(Unit* who) override

            {
                
            }

            void UpdateAI(uint32 diff) override
            {
                if (!UpdateVictim())
                    return;

                events.Update(diff);

                if (me->HasUnitState(UNIT_STATE_CASTING))
                    return;

                /*while (uint32 eventId = _events.ExecuteEvent())
                {
                    switch (eventId)
                    {

                    }
                }*/

                DoMeleeAttackIfReady();
            }
        };

        CreatureAI* GetAI(Creature* creature) const override
        {
            return new boss_ImmerseusAI(creature);
        }
};

void AddSC_boss_Immerseus()
{
    new boss_Immerseus();
}
