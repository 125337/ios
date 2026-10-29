@interface WCFinderLiveAnchorOpFansGroupCGI : WCFinderLiveBaseCgi
{
    unsigned long long _opType; // +0x8
    NSString * _fansGroupName; // +0x10
    FinderLiveAnchorCustomGiftInfo_CustomItem * _giftCustomizationItem; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initCreateFansGroupWithGroupName:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)initModifyFansGroupNameWithGroupName:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)initCustomizeFansGroupGiftWithCustomizableGiftId:(id)arg1 selectedProductId:(id)arg2 textAttachment:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initModifyFansGroupNoticeWithNotice:(id)arg1 imageUrl:(id)arg2 levelRequired:(unsigned long long)arg3 visibility:(unsigned int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initEnableAnochrCard:(BOOL)arg1 visibility:(unsigned int)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)commonInit;
- (void)createModContactRequestEnable:(BOOL)arg1 visibility:(unsigned int)arg2;
- (void)createBulletinRequestWithNotice:(id)arg1 imageUrl:(id)arg2 levelRequired:(unsigned long long)arg3 visibility:(unsigned int)arg4;
- (void)createGroupCreationOrNameModificationRequest;
- (void)createCustomizableGiftModificationRequest;
- (id)newRequest;
- (int)wireFormatOpCodeWithCgiOpType:(unsigned long long)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (id)fansGroupName;
- (void)setFansGroupName:(id)arg1;
- (id)giftCustomizationItem;
- (void)setGiftCustomizationItem:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
