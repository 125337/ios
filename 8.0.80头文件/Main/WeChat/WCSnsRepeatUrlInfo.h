@interface WCSnsRepeatUrlInfo : MMObject <PBCoding>
{
    BOOL _isShowMenuItem; // +0x8
    BOOL _isMpUrl; // +0x9
    unsigned int _invalidTime; // +0xc
    NSString * _layerId; // +0x10
    NSString * _expId; // +0x18
    WCSnsMenuItem * _menuItem; // +0x20
    NSString * _docId; // +0x28
    NSString * _extData; // +0x30
}
+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_menuItem;
+ (void)PBArrayAdd_docId;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_isShowMenuItem;
+ (void)PBArrayAdd_invalidTime;
+ (void)PBArrayAdd_isMpUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)parseRepeatUrlInfo:(id)arg1;
- (BOOL)shouldClientHideUrlAfterConfirm;
- (id)layerId;
- (void)setLayerId:(id)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (id)menuItem;
- (void)setMenuItem:(id)arg1;
- (id)docId;
- (void)setDocId:(id)arg1;
- (id)extData;
- (void)setExtData:(id)arg1;
- (BOOL)isShowMenuItem;
- (void)setIsShowMenuItem:(BOOL)arg1;
- (unsigned int)invalidTime;
- (void)setInvalidTime:(unsigned int)arg1;
- (BOOL)isMpUrl;
- (void)setIsMpUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end
