@interface WCPayLQTPurchaseCgiBottomItemCache : NSObject <PBCoding>
{
    BOOL _autoPullUpKeyboard; // +0x8
    BOOL _isShowProtocol; // +0x9
    BOOL _isProtoclDefaultChecked; // +0xa
    NSString * _bottomWording; // +0x10
    NSString * _bottomTipsWording; // +0x18
    NSArray * _protocolList; // +0x20
    NSArray * _hintOfKeyboard; // +0x28
}
+ (void)PBArrayAdd_autoPullUpKeyboard;
+ (void)PBArrayAdd_isShowProtocol;
+ (void)PBArrayAdd_isProtoclDefaultChecked;
+ (void)PBArrayAdd_bottomWording;
+ (void)PBArrayAdd_bottomTipsWording;
+ (void)PBArrayAdd_protocolList;
+ (void)PBArrayAdd_hintOfKeyboard;
+ (void)initialize;
+ (id)getBottomItemCacheWithEntranceType:(unsigned int)arg1;
+ (BOOL)saveBottomItemCache:(id)arg1 withEntranceType:(unsigned int)arg2;
- (id)getPBPropertyTable;
- (BOOL)autoPullUpKeyboard;
- (void)setAutoPullUpKeyboard:(BOOL)arg1;
- (BOOL)isShowProtocol;
- (void)setIsShowProtocol:(BOOL)arg1;
- (BOOL)isProtoclDefaultChecked;
- (void)setIsProtoclDefaultChecked:(BOOL)arg1;
- (id)bottomWording;
- (void)setBottomWording:(id)arg1;
- (id)bottomTipsWording;
- (void)setBottomTipsWording:(id)arg1;
- (id)protocolList;
- (void)setProtocolList:(id)arg1;
- (id)hintOfKeyboard;
- (void)setHintOfKeyboard:(id)arg1;
- (void).cxx_destruct;
@end

