@interface WCFinderBulletItem : NSObject
{
    BOOL _locale; // +0x8
    NSString * _text; // +0x10
    id _extension; // +0x18
    WCFinderBulletCommentInfo * _commentInfo; // +0x20
    double _appearPoint; // +0x28
    double _length; // +0x30
    double _showedPoint; // +0x38
    double _disappearPoint; // +0x40
    WCFinderBulletItemTextView * _textView; // +0x48
}
+ (double)timeRange;
+ (unsigned long long)timeRangeIndexInPoint:(double)arg1;
- (unsigned long long)timeRangeIndex;
- (id)text;
- (void)setText:(id)arg1;
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
- (BOOL)locale;
- (void)setLocale:(BOOL)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

