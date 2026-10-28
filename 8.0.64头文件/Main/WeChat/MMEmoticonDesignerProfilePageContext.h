@interface MMEmoticonDesignerProfilePageContext : MMEmoticonLiteAppPageContextBase
{
    BOOL _needLeftNavReturn; // +0x8
    BOOL _needJmp2SingleEmoji; // +0x9
    unsigned int _designerUin; // +0xc
    int _enterHasRedDot; // +0x10
    NSString * _designerId; // +0x18
    NSString * _oldRedirectUrl; // +0x20
    PersonalDesigner * _personalDesigner; // +0x28
    NSString * _sdkRequestID; // +0x30
    id /* block */ _closeBlock; // +0x38
    id /* block */ _addNewPackageBlock; // +0x40
    id /* block */ _viewDetailBlock; // +0x48
    EmoticonStoreReportInfo * _reportInfo; // +0x50
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (BOOL)needLeftNavReturn;
- (void)setNeedLeftNavReturn:(BOOL)arg1;
- (BOOL)needJmp2SingleEmoji;
- (void)setNeedJmp2SingleEmoji:(BOOL)arg1;
- (id)oldRedirectUrl;
- (void)setOldRedirectUrl:(id)arg1;
- (id)personalDesigner;
- (void)setPersonalDesigner:(id)arg1;
- (id)sdkRequestID;
- (void)setSdkRequestID:(id)arg1;
- (int)enterHasRedDot;
- (void)setEnterHasRedDot:(int)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id /* block */)addNewPackageBlock;
- (void)setAddNewPackageBlock:(id /* block */)arg1;
- (id /* block */)viewDetailBlock;
- (void)setViewDetailBlock:(id /* block */)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
