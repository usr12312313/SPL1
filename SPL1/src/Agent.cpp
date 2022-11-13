#include "Agent.h"

Agent::Agent(int agentId, int partyId, SelectionPolicy *selectionPolicy) : mAgentId(agentId), mPartyId(partyId), mSelectionPolicy(selectionPolicy)
{
    // You can change the implementation of the constructor, but not the signature!
}

int Agent::getId() const
{
    return mAgentId;
}

int Agent::getPartyId() const
{
    return mPartyId;
}

void Agent::step(Simulation &sim)
{
    /*
     TODO: implement this method
     offer prefered party to join, if party is waiting change its state to collecting offers
     notice: there is only one agent for each party (The total number of agents in the simulation equals the- 
     number of parties in the graph belonging to some coalition)
     an agent can only offer to a party which his coalition hasnt offered yet, we should implement a way to check this- 
     (The party did not already receive an offer from any agent from the coalition to which the agent belongs.)
    */
}
