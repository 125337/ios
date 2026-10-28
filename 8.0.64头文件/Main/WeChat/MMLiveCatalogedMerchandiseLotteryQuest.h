@interface MMLiveCatalogedMerchandiseLotteryQuest : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _specifiedComment; // +0x10
    NSString * _liveNoticeId; // +0x18
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)specifiedComment;
- (void)setSpecifiedComment:(id)arg1;
- (id)liveNoticeId;
- (void)setLiveNoticeId:(id)arg1;
- (void).cxx_destruct;
@end
