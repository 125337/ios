@interface MJImagePickerAssetInfo : NSObject
{
    BOOL _isAppleProResCodec; // +0x8
    BOOL _isP3DisplayColorSpace; // +0x9
    int _index; // +0xc
    NSString * _assetID; // +0x10
}
- (id)initWithAssetID:(id)arg1 index:(int)arg2 isAppleProResCodec:(BOOL)arg3 isP3DisplayColorSpace:(BOOL)arg4;
- (id)assetID;
- (int)index;
- (BOOL)isAppleProResCodec;
- (BOOL)isP3DisplayColorSpace;
- (void).cxx_destruct;
@end
