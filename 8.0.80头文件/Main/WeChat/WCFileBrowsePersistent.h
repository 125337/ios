@interface WCFileBrowsePersistent : NSObject
+ (id)getPathOfBrowseInfoDB;
+ (id)getPathOfTaskInfo;
+ (id)getPathOfFileIndexInfoDB;
+ (id)getRelatedMemoryKV;
+ (BOOL)hasFileBrowseTask;
+ (BOOL)cleanFileBrowseTask;
+ (id)getFileBrowseTask;
+ (BOOL)saveFileBrowseTask:(id)arg1;
+ (void)resetStateOfFileBrowseBuildProgress;
+ (unsigned long long)getStateOfFileBrowseBuildProgress;
+ (void)setStateOfFileBrowseBuildProgress:(unsigned long long)arg1;
+ (void)setVersionNumberOfDB:(int)arg1;
+ (int)getVersionNumberOfDB;
+ (void)setVersionNumberOfFileIndexDB:(int)arg1;
+ (int)getVersionNumberOfFileIndexDB;
+ (id)getDateWithoutHMS:(id)arg1;
+ (id)getDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
@end
