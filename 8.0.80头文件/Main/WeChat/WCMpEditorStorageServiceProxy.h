@interface WCMpEditorStorageServiceProxy : NSObject <IMpStorageService>
+ (id)getUserStoragePath;
+ (id)getDocumentPath;
+ (id)getCachePath;
+ (id)getTmpPath;
@end
