@interface StoreEmoticonDesignerProfileJumpConfig : NSObject
{
    BOOL _isPush; // +0x8
    BOOL _needLeftNavReturn; // +0x9
    BOOL _needJmp2SingleEmoji; // +0xa
    BOOL _needJmp2EmoticonTab; // +0xb
    unsigned int _designerUin; // +0xc
    PersonalDesigner * _persnalDesigner; // +0x10
    NSString * _designerId; // +0x18
    NSString * _extContent; // +0x20
    long long _extraceScene; // +0x28
    EmoticonStoreReportInfo * _reportInfo; // +0x30
    NSString * _oldRedirectUrl; // +0x38
    NSString * _sdkRequestID; // +0x40
    id /* block */ _closeBlock; // +0x48
    id /* block */ _addNewPackageBlock; // +0x50
    id /* block */ _viewDetailBlock; // +0x58
}
- (id)init;
- (id)sdkRequestID;
- (id)persnalDesigner;
- (void)setPersnalDesigner:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (id)extContent;
- (void)setExtContent:(id)arg1;
- (long long)extraceScene;
- (void)setExtraceScene:(long long)arg1;
- (BOOL)isPush;
- (void)setIsPush:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (BOOL)needLeftNavReturn;
- (void)setNeedLeftNavReturn:(BOOL)arg1;
- (BOOL)needJmp2SingleEmoji;
- (void)setNeedJmp2SingleEmoji:(BOOL)arg1;
- (id)oldRedirectUrl;
- (void)setOldRedirectUrl:(id)arg1;
- (BOOL)needJmp2EmoticonTab;
- (void)setNeedJmp2EmoticonTab:(BOOL)arg1;
- (void)setSdkRequestID:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id /* block */)addNewPackageBlock;
- (void)setAddNewPackageBlock:(id /* block */)arg1;
- (id /* block */)viewDetailBlock;
- (void)setViewDetailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

