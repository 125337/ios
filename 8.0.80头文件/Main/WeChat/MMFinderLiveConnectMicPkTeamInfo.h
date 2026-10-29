@interface MMFinderLiveConnectMicPkTeamInfo : NSObject <NSCopying>
{
    NSMutableArray * _teams; // +0x8
    MMFinderLiveConnectMicPkUIConf * _uiConf; // +0x10
}
- (void)setTeams:(id)arg1;
- (void)calculateTeamRank;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)team1;
- (id)team2;
- (id)currentBattleTeamsForServer;
- (id)firstValidTeam;
- (id)teams;
- (id)uiConf;
- (void)setUiConf:(id)arg1;
- (void).cxx_destruct;
@end
