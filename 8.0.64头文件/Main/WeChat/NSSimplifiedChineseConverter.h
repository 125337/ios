@interface NSSimplifiedChineseConverter : NSObject
{
    NSDictionary * _t2sMap; // +0x8
    NSDictionary * _s2tMap; // +0x10
}
+ (id)sharedInstance;
- (id)simplify:(id)arg1;
- (void)loadMap;
- (id)traditional:(id)arg1;
- (id)getTraditionalChineseDic;
- (id)t2sMap;
- (void)setT2sMap:(id)arg1;
- (id)s2tMap;
- (void)setS2tMap:(id)arg1;
- (void).cxx_destruct;
@end
