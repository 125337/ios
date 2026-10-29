@interface FTS5IntelligentFaceClusterItem : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    float _zScore; // +0xc
    int _faceIndex; // +0x10
    long long lastInsertedRowID; // +0x18
    long long _faceLabelId; // +0x20
    NSString * _faceFeatureStr; // +0x28
    NSString * _imgKey; // +0x30
    NSString * _partConfidenceStr; // +0x38
    double _faceRectX; // +0x40
    double _faceRectY; // +0x48
    double _faceRectWidth; // +0x50
    double _faceRectHeight; // +0x58
    NSString * _faceClusterFilePathId; // +0x60
    double _faceImageWidth; // +0x68
    double _faceImageHeight; // +0x70
    NSString * _facePointStr; // +0x78
    NSString * _l2NormFaceFeatureStr; // +0x80
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)faceLabelId;
+ (const void *)__wcdb_synthesize_146:(void *)arg1;
+ (id)swift_faceLabelId;
+ (const void *)zScore;
+ (const void *)__wcdb_synthesize_147:(void *)arg1;
+ (id)swift_zScore;
+ (const void *)faceFeatureStr;
+ (const void *)__wcdb_synthesize_148:(void *)arg1;
+ (id)swift_faceFeatureStr;
+ (const void *)imgKey;
+ (const void *)__wcdb_synthesize_149:(void *)arg1;
+ (id)swift_imgKey;
+ (const void *)faceIndex;
+ (const void *)__wcdb_synthesize_150:(void *)arg1;
+ (id)swift_faceIndex;
+ (const void *)partConfidenceStr;
+ (const void *)__wcdb_synthesize_151:(void *)arg1;
+ (id)swift_partConfidenceStr;
+ (const void *)faceRectX;
+ (const void *)__wcdb_synthesize_152:(void *)arg1;
+ (id)swift_faceRectX;
+ (const void *)faceRectY;
+ (const void *)__wcdb_synthesize_153:(void *)arg1;
+ (id)swift_faceRectY;
+ (const void *)faceRectWidth;
+ (const void *)__wcdb_synthesize_154:(void *)arg1;
+ (id)swift_faceRectWidth;
+ (const void *)faceRectHeight;
+ (const void *)__wcdb_synthesize_155:(void *)arg1;
+ (id)swift_faceRectHeight;
+ (const void *)faceClusterFilePathId;
+ (const void *)__wcdb_synthesize_156:(void *)arg1;
+ (id)swift_faceClusterFilePathId;
+ (const void *)faceImageWidth;
+ (const void *)__wcdb_synthesize_157:(void *)arg1;
+ (id)swift_faceImageWidth;
+ (const void *)faceImageHeight;
+ (const void *)__wcdb_synthesize_158:(void *)arg1;
+ (id)swift_faceImageHeight;
+ (const void *)facePointStr;
+ (const void *)__wcdb_synthesize_159:(void *)arg1;
+ (id)swift_facePointStr;
+ (const void *)l2NormFaceFeatureStr;
+ (const void *)__wcdb_synthesize_160:(void *)arg1;
+ (id)swift_l2NormFaceFeatureStr;
+ (void)__wcdb_column_constraint_161:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (long long)faceLabelId;
- (void)setFaceLabelId:(long long)arg1;
- (float)zScore;
- (void)setZScore:(float)arg1;
- (id)faceFeatureStr;
- (void)setFaceFeatureStr:(id)arg1;
- (id)imgKey;
- (void)setImgKey:(id)arg1;
- (int)faceIndex;
- (void)setFaceIndex:(int)arg1;
- (id)partConfidenceStr;
- (void)setPartConfidenceStr:(id)arg1;
- (double)faceRectX;
- (void)setFaceRectX:(double)arg1;
- (double)faceRectY;
- (void)setFaceRectY:(double)arg1;
- (double)faceRectWidth;
- (void)setFaceRectWidth:(double)arg1;
- (double)faceRectHeight;
- (void)setFaceRectHeight:(double)arg1;
- (id)faceClusterFilePathId;
- (void)setFaceClusterFilePathId:(id)arg1;
- (double)faceImageWidth;
- (void)setFaceImageWidth:(double)arg1;
- (double)faceImageHeight;
- (void)setFaceImageHeight:(double)arg1;
- (id)facePointStr;
- (void)setFacePointStr:(id)arg1;
- (id)l2NormFaceFeatureStr;
- (void)setL2NormFaceFeatureStr:(id)arg1;
- (void).cxx_destruct;
@end

