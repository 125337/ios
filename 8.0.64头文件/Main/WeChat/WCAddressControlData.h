@interface WCAddressControlData : NSObject
{
    BOOL _m_bNeedForbidStatusBarInset; // +0x8
    BOOL _forbidDarkmode; // +0x9
    BOOL _isInSheetMode; // +0xa
    BOOL _needDismissToParentVCOnAddAddress; // +0xb
    BOOL _isDirectOpenAddAddress; // +0xc
    BOOL _isInGiftMode; // +0xd
    BOOL _isSelectAddressFilledByFriend; // +0xe
    BOOL _isManagerMode; // +0xf
    unsigned int _outerSelectedAddressID; // +0x10
    WCAddressBaseAddress * structSelectBaseAddress; // +0x18
    WCAddressBaseAddress * structEditBaseAddress; // +0x20
    NSArray * m_arrAllAddress; // +0x28
    NSArray * m_arrAddressStageData; // +0x30
    unsigned long long _entryScene; // +0x38
}
+ (id)getSelectAddressDicFromAddress:(id)arg1 withAddressID:(BOOL)arg2;
- (BOOL)isSelectMode;
- (unsigned int)selectedAddressID;
- (id)structSelectBaseAddress;
- (void)setStructSelectBaseAddress:(id)arg1;
- (id)structEditBaseAddress;
- (void)setStructEditBaseAddress:(id)arg1;
- (id)m_arrAllAddress;
- (void)setM_arrAllAddress:(id)arg1;
- (id)m_arrAddressStageData;
- (void)setM_arrAddressStageData:(id)arg1;
- (BOOL)m_bNeedForbidStatusBarInset;
- (void)setM_bNeedForbidStatusBarInset:(BOOL)arg1;
- (BOOL)forbidDarkmode;
- (void)setForbidDarkmode:(BOOL)arg1;
- (BOOL)isInSheetMode;
- (void)setIsInSheetMode:(BOOL)arg1;
- (BOOL)needDismissToParentVCOnAddAddress;
- (void)setNeedDismissToParentVCOnAddAddress:(BOOL)arg1;
- (BOOL)isDirectOpenAddAddress;
- (void)setIsDirectOpenAddAddress:(BOOL)arg1;
- (BOOL)isInGiftMode;
- (void)setIsInGiftMode:(BOOL)arg1;
- (BOOL)isSelectAddressFilledByFriend;
- (void)setIsSelectAddressFilledByFriend:(BOOL)arg1;
- (unsigned int)outerSelectedAddressID;
- (void)setOuterSelectedAddressID:(unsigned int)arg1;
- (BOOL)isManagerMode;
- (void)setIsManagerMode:(BOOL)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
