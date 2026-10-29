@interface WCActionSheetWithHeadAvatar : WCActionSheet
{
    NSString * _shootEntryExtInfo; // +0x8
    id <WCActionSheetWithHeadAvatarDelegate> _m_delegate; // +0x10
    WCFinderContact * _contact; // +0x18
    NSArray * _itemsArray; // +0x20
    UIView * _finderAvatarView; // +0x28
    UIView * _tipsView; // +0x30
    UIView * _headView; // +0x38
}
- (void)updateContact:(id)arg1 itemsArray:(id)arg2;
- (id)contact;
- (id)getCustomHeadView;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (id)buildSeparateLine;
- (id)buildButtonWithTitle:(id)arg1 subTitle:(id)arg2 subTitleColor:(id)arg3 showNew:(BOOL)arg4 clickBlock:(id /* block */)arg5;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (id)shootEntryExtInfo;
- (void)setShootEntryExtInfo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setContact:(id)arg1;
- (id)itemsArray;
- (void)setItemsArray:(id)arg1;
- (id)finderAvatarView;
- (void)setFinderAvatarView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (void).cxx_destruct;
@end
