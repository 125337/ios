@interface FTSMsgCellStyle : NSObject
{
    double _cellHeight; // +0x8
    double _headImgLen; // +0x10
    double _displayNameMarginTop; // +0x18
    double _lineSpace; // +0x20
    double _displayNameFontSize; // +0x28
    double _detailTextFontSize; // +0x30
    UIColor * _displayNameColor; // +0x38
    UIColor * _detailTextColor; // +0x40
    UIColor * _countTextColor; // +0x48
    double _iconNamePostfixSize; // +0x50
}
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)headImgLen;
- (void)setHeadImgLen:(double)arg1;
- (double)displayNameMarginTop;
- (void)setDisplayNameMarginTop:(double)arg1;
- (double)lineSpace;
- (void)setLineSpace:(double)arg1;
- (double)displayNameFontSize;
- (void)setDisplayNameFontSize:(double)arg1;
- (double)detailTextFontSize;
- (void)setDetailTextFontSize:(double)arg1;
- (id)displayNameColor;
- (void)setDisplayNameColor:(id)arg1;
- (id)detailTextColor;
- (void)setDetailTextColor:(id)arg1;
- (id)countTextColor;
- (void)setCountTextColor:(id)arg1;
- (double)iconNamePostfixSize;
- (void)setIconNamePostfixSize:(double)arg1;
- (void).cxx_destruct;
@end
