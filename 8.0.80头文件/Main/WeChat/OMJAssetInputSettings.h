@interface OMJAssetInputSettings : NSObject
{
    long long _camOSTMode; // +0x8
}
- (SharedPtr<XCSMediaFileInputSettings>)createBackingSettings;
- (long long)camOSTMode;
- (void)setCamOSTMode:(long long)arg1;
@end
