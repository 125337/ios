@interface EnterpriseSessionCellLayoutParam : NSObject
{
    double cellHeight; // +0x8
    double headImgLeftMargin; // +0x10
    double headImgTopMargin; // +0x18
    double nameLabelTopMargin; // +0x20
    double nameLabelBottomMargin; // +0x28
    double nameLabelLeftMargin; // +0x30
    double nameLabelHeight; // +0x38
    double statusImgRightMargin; // +0x40
    double timeLabelRightMargin; // +0x48
    double chatNotPushViewRightMargin; // +0x50
    CGSize headImgSize; // +0x58
}
+ (id)layoutParamForCellStyle:(id)arg1;
+ (id)layoutParamForCellStyle:(id)arg1 expectedHeight:(double)arg2;
+ (id)defaultSessionCellLayoutParam;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)headImgLeftMargin;
- (void)setHeadImgLeftMargin:(double)arg1;
- (double)headImgTopMargin;
- (void)setHeadImgTopMargin:(double)arg1;
- (double)nameLabelTopMargin;
- (void)setNameLabelTopMargin:(double)arg1;
- (double)nameLabelBottomMargin;
- (void)setNameLabelBottomMargin:(double)arg1;
- (double)nameLabelLeftMargin;
- (void)setNameLabelLeftMargin:(double)arg1;
- (double)nameLabelHeight;
- (void)setNameLabelHeight:(double)arg1;
- (CGSize)headImgSize;
- (void)setHeadImgSize:(CGSize)arg1;
- (double)statusImgRightMargin;
- (void)setStatusImgRightMargin:(double)arg1;
- (double)timeLabelRightMargin;
- (void)setTimeLabelRightMargin:(double)arg1;
- (double)chatNotPushViewRightMargin;
- (void)setChatNotPushViewRightMargin:(double)arg1;
@end
