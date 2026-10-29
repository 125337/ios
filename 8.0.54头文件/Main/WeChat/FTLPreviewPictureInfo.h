@interface FTLPreviewPictureInfo : NSObject
{
    FLTNewLifeCardImgInfo * _imgInfo; // +0x8
    FLTImgPositionInfo * _positionInfo; // +0x10
}
+ (id)makeWithImgInfo:(id)arg1 positionInfo:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)imgInfo;
- (void)setImgInfo:(id)arg1;
- (id)positionInfo;
- (void)setPositionInfo:(id)arg1;
- (void).cxx_destruct;
@end

