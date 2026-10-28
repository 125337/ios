@interface BrandDebugCenterSimpleOptionItem : NSObject <WCActionSheetDelegate, IBrandDebugCenterItemProtocol>
{
    NSMutableArray * m_optionArr; // +0x8
    NSString * m_title; // +0x10
    id /* block */ m_callback; // +0x18
    BrandDebugCenterSimpleOption * m_selectedOption; // +0x20
    MMUIButton * m_itemView; // +0x28
    MMUILabel * m_titleLabel; // +0x30
    MMUILabel * m_descLabel; // +0x38
}
- (void)addOption:(unsigned int)arg1 wording:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setSelectedOption:(unsigned int)arg1;
- (void)setCallBack:(id /* block */)arg1;
- (void)setDisable:(BOOL)arg1;
- (id)itemView;
- (void)onTap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void).cxx_destruct;
@end
