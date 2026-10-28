@interface WCFinderHeightModel : NSObject
{
    double _wrappedTextHeight; // +0x8
    double _fullTextHeight; // +0x10
}
- (double)wrappedTextHeight;
- (void)setWrappedTextHeight:(double)arg1;
- (double)fullTextHeight;
- (void)setFullTextHeight:(double)arg1;
@end
