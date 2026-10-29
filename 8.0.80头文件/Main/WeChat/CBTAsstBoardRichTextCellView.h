@interface CBTAsstBoardRichTextCellView : CBTAsstBoardBaseCellView <ILinkEventExt>
{
    BOOL _didRequestRemoveRecQuestions; // +0x8
    RichTextView * _richTextView; // +0x10
    CBTAsstBoardBaseViewModel * _lastLinkReportVM; // +0x18
}
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (double)currentRichTextWidth;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)fillLinkReportParams:(id)arg1 withRawUrl:(id)arg2;
- (id)extractLinkTextForRawUrl:(id)arg1;
- (void)addFuncScenesToParams:(id)arg1 fromUrl:(id)arg2;
- (id)resolveParameterizedUrl:(id)arg1;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (CGRect)getBubbleFrame;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (BOOL)didRequestRemoveRecQuestions;
- (void)setDidRequestRemoveRecQuestions:(BOOL)arg1;
- (id)lastLinkReportVM;
- (void)setLastLinkReportVM:(id)arg1;
- (void).cxx_destruct;
@end
