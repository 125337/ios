@interface WAReportImageEntranceSaveItem : WAReportBaseItem
{
    unsigned int _saveTimeStamp; // +0x8
    NSString * _userName; // +0x10
    NSString * _currentAppId; // +0x18
    NSString * _currentPath; // +0x20
    NSString * _imageSrc; // +0x28
    NSString * _imageAppId; // +0x30
    NSString * _imagePath; // +0x38
    NSString * _imageKey; // +0x40
}
- (int)reportID;
- (id)reportString;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)saveTimeStamp;
- (void)setSaveTimeStamp:(unsigned int)arg1;
- (id)currentAppId;
- (void)setCurrentAppId:(id)arg1;
- (id)currentPath;
- (void)setCurrentPath:(id)arg1;
- (id)imageSrc;
- (void)setImageSrc:(id)arg1;
- (id)imageAppId;
- (void)setImageAppId:(id)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)imageKey;
- (void)setImageKey:(id)arg1;
- (void).cxx_destruct;
@end
