@interface KSAudioHelper : NSObject
+ (id)formatOSStatus:(int)arg1;
+ (id)guessAudioFileType:(id)arg1 propertyId:(unsigned int)arg2;
+ (unsigned int)getAudioFormatByFileHeader:(id)arg1 fileExtension:(id)arg2;
+ (unsigned int)hintForFileExtension:(id)arg1;
@end

