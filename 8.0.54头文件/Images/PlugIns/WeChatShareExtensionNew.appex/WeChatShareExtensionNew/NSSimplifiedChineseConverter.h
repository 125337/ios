@interface NSSimplifiedChineseConverter : NSObject
{
    NSDictionary * _t2sMap; // +0x8
}
+ (id)sharedInstance;
- (id)simplify:(id)arg1;
- (void)loadMap;
- (id)getTraditionalChineseDic;
- (id)t2sMap;
- (void)setT2sMap:(id)arg1;
- (void).cxx_destruct;
@end

