@interface OMCProject : NSObject
{
    SharedPtr<XMSProject> _backingProject; // +0x8
}
- (id)initWithBackingProject:(const void *)arg1;
- (id)identifier;
- (long long)segmentCount;
- (struct)duration;
- (id)aspectRatio;
- (id)frameRate;
- (id)creationDate;
- (id)modificationDate;
- (id)name;
- (void)setName:(id)arg1;
- (void)updateCoverImage:(id)arg1;
- (id)coverImageFilePath;
- (id)decorPackageDescFilePath;
- (id)filesDirPath;
- (id)assetsDirPath;
- (id)materialsDirPath;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)saveToData;
- (id)description;
- (SharedPtr<XMSProject>)backingProject;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
