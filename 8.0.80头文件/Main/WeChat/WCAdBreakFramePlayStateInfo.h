@interface WCAdBreakFramePlayStateInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _breakHideDuration; // +0x8
    WCAdBreakFramePlayStateItem * _breakState; // +0x10
    WCAdBreakFramePlayStateItem * _stopState; // +0x18
    WCAdBreakFramePlayStateItem * _likeState; // +0x20
    WCAdBreakFramePlayStateItem * _commentState; // +0x28
    WCAdBreakFramePlayStateItem * _cancelLikeState; // +0x30
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)breakHideDuration;
- (void)setBreakHideDuration:(double)arg1;
- (id)breakState;
- (void)setBreakState:(id)arg1;
- (id)stopState;
- (void)setStopState:(id)arg1;
- (id)likeState;
- (void)setLikeState:(id)arg1;
- (id)commentState;
- (void)setCommentState:(id)arg1;
- (id)cancelLikeState;
- (void)setCancelLikeState:(id)arg1;
- (void).cxx_destruct;
@end
