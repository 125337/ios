@interface WCFinderSceneMarkModel : NSObject <PBCoding>
{
    int _commentScene; // +0x8
    UIViewController * _vc; // +0x10
    UITableViewCell * _tableViewCell; // +0x18
    WCPlayerView * _playerView; // +0x20
    long long _enterTimeStamp; // +0x28
    NSMutableArray * _feedMarkArray; // +0x30
}
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_enterTimeStamp;
+ (void)PBArrayAdd_feedMarkArray;
+ (void)initialize;
+ (BOOL)isFinderTimelineCommenetScene:(int)arg1;
+ (BOOL)isStrongStableEntranceScene:(int)arg1;
+ (BOOL)isNoneStableEntranceScene:(int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)diskSceneCategory;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)tableViewCell;
- (void)setTableViewCell:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)enterTimeStamp;
- (void)setEnterTimeStamp:(long long)arg1;
- (id)feedMarkArray;
- (void)setFeedMarkArray:(id)arg1;
- (void).cxx_destruct;
@end
