@interface BrandDebugCenterNumberItem : NSObject <IBrandDebugCenterItemProtocol>
{
    MMUIButton * m_itemView; // +0x8
    MMUILabel * m_titleLabel; // +0x10
    MMUILabel * m_descLabel; // +0x18
    NSString * _title; // +0x20
    NSNumber * _number; // +0x28
    id /* block */ _callback; // +0x30
}
- (void)setNumber:(id)arg1;
- (id)itemView;
- (void)layoutItemView;
- (void)onTap;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)number;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
