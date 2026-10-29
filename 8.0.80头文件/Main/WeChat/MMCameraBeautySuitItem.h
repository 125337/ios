@interface MMCameraBeautySuitItem : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _cameraSceneTitle; // +0x10
    id /* block */ _beautyDescriptorFactory; // +0x18
}
+ (id)offItem;
+ (id)lowItem;
+ (id)mediumItem;
+ (id)highItem;
- (id)cameraSceneTitle;
- (id)genOMJBeautyDesc;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setCameraSceneTitle:(id)arg1;
- (id /* block */)beautyDescriptorFactory;
- (void)setBeautyDescriptorFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end
