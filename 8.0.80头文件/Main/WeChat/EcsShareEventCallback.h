@interface EcsShareEventCallback : NSObject
{
    id /* block */ _didSelectItem; // +0x8
    id /* block */ _didSelectContact; // +0x10
    id /* block */ _didDismiss; // +0x18
    id /* block */ _didShow; // +0x20
    id /* block */ _onFail; // +0x28
    id /* block */ _getAbosulteFilePath; // +0x30
    id /* block */ _recordCustomIconResolveFail; // +0x38
}
- (id /* block */)didSelectItem;
- (void)setDidSelectItem:(id /* block */)arg1;
- (id /* block */)didSelectContact;
- (void)setDidSelectContact:(id /* block */)arg1;
- (id /* block */)didDismiss;
- (void)setDidDismiss:(id /* block */)arg1;
- (id /* block */)didShow;
- (void)setDidShow:(id /* block */)arg1;
- (id /* block */)onFail;
- (void)setOnFail:(id /* block */)arg1;
- (id /* block */)getAbosulteFilePath;
- (void)setGetAbosulteFilePath:(id /* block */)arg1;
- (id /* block */)recordCustomIconResolveFail;
- (void)setRecordCustomIconResolveFail:(id /* block */)arg1;
- (void).cxx_destruct;
@end
