@interface BizImageSelectInfo : NSObject
{
    NSArray * _imgList; // +0x8
    NSNumber * _ratioW; // +0x10
    NSNumber * _ratioH; // +0x18
    NSNumber * _picFromScene; // +0x20
}
+ (id)makeWithImgList:(id)arg1 ratioW:(id)arg2 ratioH:(id)arg3 picFromScene:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)imgList;
- (void)setImgList:(id)arg1;
- (id)ratioW;
- (void)setRatioW:(id)arg1;
- (id)ratioH;
- (void)setRatioH:(id)arg1;
- (id)picFromScene;
- (void)setPicFromScene:(id)arg1;
- (void).cxx_destruct;
@end
