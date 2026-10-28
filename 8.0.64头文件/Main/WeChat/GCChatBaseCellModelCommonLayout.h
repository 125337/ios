@interface GCChatBaseCellModelCommonLayout : GCDynamicLayoutProvider
{
    double _headImgTopOffset; // +0x8
    double _nameLineHeight; // +0x10
    double _nameLabelFontSize; // +0x18
    UIFont * _nameLabelFont; // +0x20
    double _textFontSize; // +0x28
    double _textLineHeight; // +0x30
    double _roleLabelPadding; // +0x38
    double _roleLabelFontSize; // +0x40
    double _roleIconSize; // +0x48
    double _roleIconLabelSpace; // +0x50
    double _noticeLabelFontSize; // +0x58
    double _headImgWidth; // +0x60
    double _ticklePagWidth; // +0x68
    double _ticklePagHeight; // +0x70
    double _statusBgWidth; // +0x78
    double _statusImgWidth; // +0x80
    double _sendFailViewWidth; // +0x88
    GCLabelDynamicLayout * _btmVoteTipLayout; // +0x90
    double _voteFameHeight; // +0x98
    double _choosenPublishBarHeight; // +0xa0
    GCLabelDynamicLayout * _channelLabelLayout; // +0xa8
    double _cellChannelSharpImgSpace; // +0xb0
    double _sharpImgWidth; // +0xb8
    double _channelLabelBtmMargin; // +0xc0
    UIEdgeInsets _contentMarginInsets; // +0xc8
    UIEdgeInsets _emoticonMarginInsets; // +0xe8
}
- (id)init;
- (UIEdgeInsets)contentMarginInsets;
- (void)setContentMarginInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)emoticonMarginInsets;
- (void)setEmoticonMarginInsets:(UIEdgeInsets)arg1;
- (double)headImgTopOffset;
- (void)setHeadImgTopOffset:(double)arg1;
- (double)nameLineHeight;
- (void)setNameLineHeight:(double)arg1;
- (double)nameLabelFontSize;
- (void)setNameLabelFontSize:(double)arg1;
- (id)nameLabelFont;
- (void)setNameLabelFont:(id)arg1;
- (double)textFontSize;
- (void)setTextFontSize:(double)arg1;
- (double)textLineHeight;
- (void)setTextLineHeight:(double)arg1;
- (double)roleLabelPadding;
- (void)setRoleLabelPadding:(double)arg1;
- (double)roleLabelFontSize;
- (void)setRoleLabelFontSize:(double)arg1;
- (double)roleIconSize;
- (void)setRoleIconSize:(double)arg1;
- (double)roleIconLabelSpace;
- (void)setRoleIconLabelSpace:(double)arg1;
- (double)noticeLabelFontSize;
- (void)setNoticeLabelFontSize:(double)arg1;
- (double)headImgWidth;
- (void)setHeadImgWidth:(double)arg1;
- (double)ticklePagWidth;
- (void)setTicklePagWidth:(double)arg1;
- (double)ticklePagHeight;
- (void)setTicklePagHeight:(double)arg1;
- (double)statusBgWidth;
- (void)setStatusBgWidth:(double)arg1;
- (double)statusImgWidth;
- (void)setStatusImgWidth:(double)arg1;
- (double)sendFailViewWidth;
- (void)setSendFailViewWidth:(double)arg1;
- (id)btmVoteTipLayout;
- (void)setBtmVoteTipLayout:(id)arg1;
- (double)voteFameHeight;
- (void)setVoteFameHeight:(double)arg1;
- (double)choosenPublishBarHeight;
- (void)setChoosenPublishBarHeight:(double)arg1;
- (id)channelLabelLayout;
- (void)setChannelLabelLayout:(id)arg1;
- (double)cellChannelSharpImgSpace;
- (void)setCellChannelSharpImgSpace:(double)arg1;
- (double)sharpImgWidth;
- (void)setSharpImgWidth:(double)arg1;
- (double)channelLabelBtmMargin;
- (void)setChannelLabelBtmMargin:(double)arg1;
- (void).cxx_destruct;
@end
