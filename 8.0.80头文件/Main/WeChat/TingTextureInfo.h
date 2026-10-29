@interface TingTextureInfo : NSObject
{
    NSNumber * _textureId; // +0x8
    NSNumber * _textureWidth; // +0x10
    NSNumber * _textureHeight; // +0x18
}
+ (id)makeWithTextureId:(id)arg1 textureWidth:(id)arg2 textureHeight:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)textureId;
- (void)setTextureId:(id)arg1;
- (id)textureWidth;
- (void)setTextureWidth:(id)arg1;
- (id)textureHeight;
- (void)setTextureHeight:(id)arg1;
- (void).cxx_destruct;
@end
