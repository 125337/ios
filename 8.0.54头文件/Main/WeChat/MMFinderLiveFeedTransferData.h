@interface MMFinderLiveFeedTransferData : NSObject
{
    FinderLiveBattleSettingInfo * _battleSettings; // +0x8
    NSArray * _comments; // +0x10
}
- (id)useComments;
- (id)battleSettings;
- (void)setBattleSettings:(id)arg1;
- (id)comments;
- (void)setComments:(id)arg1;
- (void).cxx_destruct;
@end

