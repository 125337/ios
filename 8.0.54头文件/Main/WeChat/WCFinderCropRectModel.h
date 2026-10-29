@interface WCFinderCropRectModel : NSObject <WCTColumnCoding, PBCoding>
{
    double _topPercent; // +0x8
    double _leftPercent; // +0x10
    double _widthPercent; // +0x18
    double _heightPercent; // +0x20
}
+ (void)PBArrayAdd_topPercent;
+ (void)PBArrayAdd_leftPercent;
+ (void)PBArrayAdd_widthPercent;
+ (void)PBArrayAdd_heightPercent;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)initWithPBRectModel:(id)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (BOOL)isValid;
- (void)resetAllValue;
- (void)setTopPercent:(double)arg1;
- (void)setLeftPercent:(double)arg1;
- (void)setWidthPercent:(double)arg1;
- (void)setHeightPercent:(double)arg1;
- (double)imageCenterX;
- (double)imageCenterY;
- (id)description;
- (id)genCropRectModelPB;
- (double)topPercent;
- (double)leftPercent;
- (double)widthPercent;
- (double)heightPercent;
@end

