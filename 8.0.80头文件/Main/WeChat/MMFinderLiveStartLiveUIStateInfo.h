@interface MMFinderLiveStartLiveUIStateInfo : NSObject
{
    NSString * _bulletDescription; // +0x8
    NSString * _bulletDdescriptionExtend; // +0x10
    NSString * _bulletPlaceHolderString; // +0x18
    FinderLiveQuestEntranceInfo * _questEntranceInfo; // +0x20
    NSMutableArray * _questActivities; // +0x28
    FinderLiveQuickReplyWordingInfo * _quickReplyWordingInfo; // +0x30
    NSMutableArray * _lotteryArray; // +0x38
    NSMutableArray * _lotteryAttendTypeList; // +0x40
}
- (id)bulletDescription;
- (void)setBulletDescription:(id)arg1;
- (id)bulletDdescriptionExtend;
- (void)setBulletDdescriptionExtend:(id)arg1;
- (id)bulletPlaceHolderString;
- (void)setBulletPlaceHolderString:(id)arg1;
- (id)questEntranceInfo;
- (void)setQuestEntranceInfo:(id)arg1;
- (id)questActivities;
- (void)setQuestActivities:(id)arg1;
- (id)quickReplyWordingInfo;
- (void)setQuickReplyWordingInfo:(id)arg1;
- (id)lotteryArray;
- (void)setLotteryArray:(id)arg1;
- (id)lotteryAttendTypeList;
- (void)setLotteryAttendTypeList:(id)arg1;
- (void).cxx_destruct;
@end
