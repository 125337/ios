@interface TextMessageSubViewModel : TextMessageViewModel
{
    TextMessageViewModel * _parentModel; // +0xa0
    double _startHeight; // +0xa8
}
- (id)initWithParentViewModel:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)resetLayoutCache;
- (void)expandSolitaire;
- (id)delegate;
- (long long)numberOfRowsInSection;
- (void)setLinkHighlighted:(BOOL)arg1 url:(id)arg2 frame:(CGRect)arg3;
- (_NSRange)getLinkRangeWithTargetLinkStyle:(id)arg1;
- (CGRect)realFrameByCurFrame:(CGRect)arg1;
- (id)parentModel;
- (void)setParentModel:(id)arg1;
- (double)startHeight;
- (void)setStartHeight:(double)arg1;
- (void).cxx_destruct;
@end

