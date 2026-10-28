@interface WAEJFileSystem : NSObject
{
    id <EJFileSystemDelegate> delegate; // +0x8
    NSMutableArray * _noretainObejcts; // +0x10
}
- (void)dealloc;
- (BOOL)isFileExist:(id)arg1;
- (id)getFileData:(id)arg1;
- (id)getFileDataWithUrl:(id)arg1;
- (id)createImageWithSvgData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
- (void)addBackground:(id)arg1;
- (void)enterForeground;
- (void)cancelAllFileTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
