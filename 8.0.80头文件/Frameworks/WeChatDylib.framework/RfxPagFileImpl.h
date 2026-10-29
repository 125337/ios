@interface RfxPagFileImpl : NSObject
{
    shared_ptr<rfx::RfxPagFile> _pagFile; // +0x8
}
+ (id)ToPagFile:(shared_ptr<rfx::RfxPagFile>)arg1;
+ (id)Load:(id)arg1;
+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2;
- (id)initWithPagFile:(shared_ptr<rfx::RfxPagFile>)arg1;
- (shared_ptr<rfx::RfxPagFile>)pagFile;
- (void)setPagFile:(shared_ptr<rfx::RfxPagFile>)arg1;
- (long long)duration;
- (long long)width;
- (long long)height;
- (id)audioBytes;
- (long long)audioStartTime;
- (id)path;
- (void)setText:(id)arg1 forAllTextLayersWithName:(id)arg2;
- (void)resetTextForAllTextLayersWithName:(id)arg1;
- (void)setImage:(id)arg1 forAllImageLayersWithName:(id)arg2;
- (void)resetImageForAllImageLayersWithName:(id)arg1;
- (id)copyOriginal;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
