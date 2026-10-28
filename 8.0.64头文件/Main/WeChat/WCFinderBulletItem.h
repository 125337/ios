@interface WCFinderBulletItem : NSObject
{
    BOOL _isSelfLike; // +0x8
    NSString * _text; // +0x10
    long long _likeCount; // +0x18
    id _extension; // +0x20
    WCFinderBulletCommentInfo * _commentInfo; // +0x28
    double _appearPoint; // +0x30
    double _length; // +0x38
    double _showedPoint; // +0x40
    double _disappearPoint; // +0x48
    ResolvedEnhancedLabel * _resolvedLabel; // +0x50
    WCFinderBulletItemTextView * _textView; // +0x58
}
+ (double)timeRange;
+ (unsigned long long)timeRangeIndexInPoint:(double)arg1;
+ (id)itemWithInfo:(id)arg1;
- (unsigned long long)timeRangeIndex;
- (void)updateWithOperateAction:(long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (BOOL)isSelfLike;
- (void)setIsSelfLike:(BOOL)arg1;
- (id)extension;
- (void)setExtension:(id)arg1;
- (id)commentInfo;
- (void)setCommentInfo:(id)arg1;
- (double)appearPoint;
- (void)setAppearPoint:(double)arg1;
- (double)length;
- (void)setLength:(double)arg1;
- (double)showedPoint;
- (void)setShowedPoint:(double)arg1;
- (double)disappearPoint;
- (void)setDisappearPoint:(double)arg1;
- (id)resolvedLabel;
- (void)setResolvedLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end
