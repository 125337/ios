@interface BTReaderHeaderItemCellViewModel : BTBaseItemCellViewModel
{
    NSMutableArray * _contactLabelStyles; // +0x28
    UIFont * _contactLabelFont; // +0x30
    double _contactLabelMaxWidth; // +0x38
    CGSize _contactLabelSize; // +0x40
}
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)itemViewClassName;
- (double)viewHeight;
- (void)clearCache;
- (double)headerWidth;
- (id)timeLabelFont;
- (id)rightTopWording;
- (BOOL)isBrandLiving;
- (double)contactLabelMaxWidth;
- (id)contactLabelFont;
- (id)contactLabelStyles;
- (CGSize)contactLabelSize;
- (BOOL)isMsgTopRightUseRecReason;
- (id)readerMsgSectionData;
- (void)setContactLabelStyles:(id)arg1;
- (void)setContactLabelSize:(CGSize)arg1;
- (void)setContactLabelFont:(id)arg1;
- (void)setContactLabelMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

