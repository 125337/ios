@interface AppFileMessageDisplayInput : NSObject
{
    int _progress; // +0x8
    NSString * _taskName; // +0x10
    NSString * _fileSizeText; // +0x18
    NSString * _fileExt; // +0x20
    UIImage * _thumbImage; // +0x28
}
- (id)taskName;
- (void)setTaskName:(id)arg1;
- (id)fileSizeText;
- (void)setFileSizeText:(id)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (int)progress;
- (void)setProgress:(int)arg1;
- (void).cxx_destruct;
@end
