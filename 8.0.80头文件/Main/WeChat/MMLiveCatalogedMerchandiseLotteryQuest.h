@interface MMLiveCatalogedMerchandiseLotteryQuest : NSObject
{
    BOOL _unknownBlueGiftType; // +0x8
    BOOL _reservedNotice; // +0x9
    BOOL _prerequisiteSatisfied; // +0xa
    unsigned long long _type; // +0x10
    NSString * _buttonWording; // +0x18
    NSString * _specifiedComment; // +0x20
    NSString * _liveNoticeId; // +0x28
    FinderJumpInfo * _jumpInfo; // +0x30
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)unknownBlueGiftType;
- (void)setUnknownBlueGiftType:(BOOL)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (id)specifiedComment;
- (void)setSpecifiedComment:(id)arg1;
- (id)liveNoticeId;
- (void)setLiveNoticeId:(id)arg1;
- (BOOL)reservedNotice;
- (void)setReservedNotice:(BOOL)arg1;
- (BOOL)prerequisiteSatisfied;
- (void)setPrerequisiteSatisfied:(BOOL)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
