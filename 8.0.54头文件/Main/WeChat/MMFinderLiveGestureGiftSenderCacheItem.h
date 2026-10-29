@interface MMFinderLiveGestureGiftSenderCacheItem : NSObject
{
    NSString * _comboId; // +0x8
    NSString * _nickname; // +0x10
    NSString * _validForGestureId; // +0x18
    unsigned long long _validUntil; // +0x20
}
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)validForGestureId;
- (void)setValidForGestureId:(id)arg1;
- (unsigned long long)validUntil;
- (void)setValidUntil:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

