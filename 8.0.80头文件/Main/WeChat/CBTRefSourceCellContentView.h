@interface CBTRefSourceCellContentView : UIView <CBTStreamMDParseLogicDelegate, CBTStreamMDTextViewDelegate>
{
    BOOL _isLastRow; // +0x8
    BOOL _hasSourceTitle; // +0x9
    BOOL _isMultimodalLayout; // +0xa
    BOOL _timelineRowCollapsed; // +0xb
    BOOL _suppressSeparatorForLayout; // +0xc
    UIView * _sourceRow; // +0x10
    UILabel * _sourceLabel; // +0x18
    UIImageView * _iconView; // +0x20
    NSMutableAttributedString * _displayDefContent; // +0x28
    CBTStreamMDTextView * _titleTextView; // +0x30
    CBTStreamMDParseLogic * _mdParser; // +0x38
    UIView * _separatorLine; // +0x40
    double _contentPadding; // +0x48
    double _innerWidth; // +0x50
    double _titleTextViewHeight; // +0x58
    CBTReferenceSourceSheet * _parentSheet; // +0x60
    id <CBTRefSourceCellContentViewDelegate> _heightDelegate; // +0x68
    long long _itemIndex; // +0x70
    CBTAttachmentHostTraceInfo * _hostTraceInfo; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (double)effectiveContentPadding;
- (double)effectiveVerticalPadding;
- (double)effectiveSourceRowGap;
- (void)configureWithItem:(id)arg1 contentWidth:(double)arg2 isLastRow:(BOOL)arg3;
- (void)layoutWithWidth:(double)arg1;
- (double)calculatedTotalHeight;
- (void)onGeneratedContent:(id)arg1;
- (void)onParseFinished;
- (id)hostTraceInfoForStreamMDTextView:(id)arg1;
- (void)onTextViewHeightChange:(id)arg1 height:(double)arg2;
- (void)onClickLink:(id)arg1;
- (id)embeddedTimelineViewModel;
- (void)dealloc;
- (id)sourceRow;
- (void)setSourceRow:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)displayDefContent;
- (void)setDisplayDefContent:(id)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)mdParser;
- (void)setMdParser:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (BOOL)isLastRow;
- (void)setIsLastRow:(BOOL)arg1;
- (BOOL)hasSourceTitle;
- (void)setHasSourceTitle:(BOOL)arg1;
- (double)contentPadding;
- (void)setContentPadding:(double)arg1;
- (double)innerWidth;
- (void)setInnerWidth:(double)arg1;
- (double)titleTextViewHeight;
- (void)setTitleTextViewHeight:(double)arg1;
- (id)parentSheet;
- (void)setParentSheet:(id)arg1;
- (id)heightDelegate;
- (void)setHeightDelegate:(id)arg1;
- (long long)itemIndex;
- (void)setItemIndex:(long long)arg1;
- (id)hostTraceInfo;
- (void)setHostTraceInfo:(id)arg1;
- (BOOL)isMultimodalLayout;
- (void)setIsMultimodalLayout:(BOOL)arg1;
- (BOOL)timelineRowCollapsed;
- (void)setTimelineRowCollapsed:(BOOL)arg1;
- (BOOL)suppressSeparatorForLayout;
- (void)setSuppressSeparatorForLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
