@interface WCFinderFullScreenEditRectModel : NSObject <PBCoding>
{
    double _leftPrecent; // +0x8
    double _topPrecent; // +0x10
    double _widthPrecent; // +0x18
    double _heightPrecent; // +0x20
    FinderHalfRect * _halfRect; // +0x28
}
+ (void)PBArrayAdd_leftPrecent;
+ (void)PBArrayAdd_topPrecent;
+ (void)PBArrayAdd_widthPrecent;
+ (void)PBArrayAdd_heightPrecent;
+ (void)PBArrayAdd_halfRect;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithHalfRect:(id)arg1 feedSize:(CGSize)arg2;
- (id)genHalfRectWithFeedSize:(CGSize)arg1;
- (id)covertRectModelFromOldFeedSize:(CGSize)arg1 toNewFeedSize:(CGSize)arg2;
- (BOOL)isLegalEditRectModel;
- (void)correctParamsToLegal;
- (id)description;
- (double)leftPrecent;
- (void)setLeftPrecent:(double)arg1;
- (double)topPrecent;
- (void)setTopPrecent:(double)arg1;
- (double)widthPrecent;
- (void)setWidthPrecent:(double)arg1;
- (double)heightPrecent;
- (void)setHeightPrecent:(double)arg1;
- (id)halfRect;
- (void)setHalfRect:(id)arg1;
- (void).cxx_destruct;
@end

