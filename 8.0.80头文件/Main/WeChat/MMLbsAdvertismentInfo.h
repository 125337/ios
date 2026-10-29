@interface MMLbsAdvertismentInfo : NSObject
{
    BOOL _canBeClose; // +0x8
    NSString * _adId; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _iconUrl; // +0x28
    long long _jumpType; // +0x30
    NSString * _jumpTarget; // +0x38
    long long _position; // +0x40
    long long _showTimes; // +0x48
    long long _closeTimes; // +0x50
}
- (id)initWithXML:(id)arg1;
- (void)updateCloseState;
- (id)adId;
- (void)setAdId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (BOOL)canBeClose;
- (void)setCanBeClose:(BOOL)arg1;
- (long long)jumpType;
- (void)setJumpType:(long long)arg1;
- (id)jumpTarget;
- (void)setJumpTarget:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (long long)showTimes;
- (void)setShowTimes:(long long)arg1;
- (long long)closeTimes;
- (void)setCloseTimes:(long long)arg1;
- (void).cxx_destruct;
@end
