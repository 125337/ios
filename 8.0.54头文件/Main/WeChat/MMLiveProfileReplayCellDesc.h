@interface MMLiveProfileReplayCellDesc : MMUIView
{
    MMUIView * _background; // +0x8
    MMUIImageView * _iconView; // +0x10
    MMUILabel * _descLabel; // +0x18
    MMUILabel * _paidLabel; // +0x20
    unsigned long long _style; // +0x28
}
+ (id)getDescFont:(unsigned long long)arg1;
+ (id)getDescText:(unsigned long long)arg1 data:(id)arg2;
+ (CGSize)caculateSize:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutPaid;
- (void)layoutNormal;
- (void)layoutLock;
- (void)layoutWordingAlert;
- (void)layoutHide;
- (void)updateWithDataItem:(id)arg1;
- (id)background;
- (id)iconView;
- (id)descLabel;
- (id)paidLabel;
- (void)setBackground:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setPaidLabel:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

