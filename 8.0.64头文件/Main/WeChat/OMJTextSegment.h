@interface OMJTextSegment : OMJSegment
{
    SharedPtr<XMJTextSegment> _backingTextSegment; // +0x8
}
- (id)initWithBackingSegment:(const void *)arg1;
- (id)text;
- (BOOL)updataText:(id)arg1 shouldCommit:(BOOL)arg2;
- (id)textStyles;
- (id)layerStyles;
- (void)updateTextStyles:(id)arg1 layerStyles:(id)arg2 shouldCommit:(BOOL)arg3;
- (id)spatialInfo;
- (BOOL)setSpatialInfo:(id)arg1 shouldCommit:(BOOL)arg2;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
