@interface QIndoorManager : NSObject <QMapContextDelegate, QIndoorPickerDelegate>
{
    BOOL _indoorEnabled; // +0x8
    BOOL _indoorPrevilege; // +0x9
    BOOL _indoorPickerEnabled; // +0xa
    BOOL _darkMode; // +0xb
    BOOL _isLogoRightBottom; // +0xc
    id <QIndoorManagerDelegate> _delegate; // +0x10
    NSString * _customFont; // +0x18
    UIView * _hostView; // +0x20
    QIndoorBuilding * _activeBuilding; // +0x28
    QStatisticer * _statisticer; // +0x30
    QUniversalMapCounter * _indoorUBSCounter; // +0x38
    double _logoAndMapCenterHeight; // +0x40
    QIndoorPicker * _picker; // +0x48
    unsigned long long _activeLevelIndex; // +0x50
    QIndoorMapData * _indoorMapData; // +0x58
    NSString * _businessKey; // +0x60
    NSString * _configDirectoryPath; // +0x68
    NSString * _indoorPlistPath; // +0x70
    QMapContext * _mapContext; // +0x78
    CGPoint _indoorPickerOffset; // +0x80
}
- (void)setInoorCellInfo:(id)arg1;
- (void)resetIndoorCell;
- (void)callDelegateDidChangeActiveBuilding:(id)arg1;
- (void)callDelegateDidChangeActiveLevel:(id)arg1;
- (BOOL)isAnyIndoorShown;
- (long long)keyType;
- (void)createPicker;
- (void)updatePickStatus;
- (void)updatePicker;
- (void)validatePickerFrame:(double)arg1;
- (void)indoorPicker:(id)arg1 didSelectLevelIndex:(unsigned long long)arg2;
- (void)mapContext:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)setIndoorEnabled:(BOOL)arg1;
- (void)setIndoorPickerEnabled:(BOOL)arg1;
- (void)setIndoorPickerOffset:(CGPoint)arg1;
- (void)setActiveLevel:(id)arg1;
- (id)activeLevel;
- (void)updateIndoorMapData:(id)arg1;
- (void)resetIndoorMapData;
- (void)reloadIndoorMap;
- (void)setActiveIndoorInfo:(id)arg1;
- (void)setIndoorMaskColor:(id)arg1;
- (double)getIndoorOutlineZoom:(id)arg1;
- (void)setActiveBuildsFilter:(id)arg1;
- (void)setCustomFont:(id)arg1;
- (void)setDarkMode:(BOOL)arg1;
- (id)initWithContext:(id)arg1 configPreference:(id)arg2;
- (void)setupIndoorPlist;
- (void)setupIndoorMapData;
- (void)reloadCurrentState;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)customFont;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (BOOL)isIndoorEnabled;
- (BOOL)indoorPrevilege;
- (void)setIndoorPrevilege:(BOOL)arg1;
- (BOOL)indoorPickerEnabled;
- (CGPoint)indoorPickerOffset;
- (id)activeBuilding;
- (void)setActiveBuilding:(id)arg1;
- (id)statisticer;
- (void)setStatisticer:(id)arg1;
- (id)indoorUBSCounter;
- (void)setIndoorUBSCounter:(id)arg1;
- (BOOL)darkMode;
- (double)logoAndMapCenterHeight;
- (void)setLogoAndMapCenterHeight:(double)arg1;
- (BOOL)isLogoRightBottom;
- (void)setIsLogoRightBottom:(BOOL)arg1;
- (id)picker;
- (void)setPicker:(id)arg1;
- (unsigned long long)activeLevelIndex;
- (void)setActiveLevelIndex:(unsigned long long)arg1;
- (id)indoorMapData;
- (void)setIndoorMapData:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (id)configDirectoryPath;
- (void)setConfigDirectoryPath:(id)arg1;
- (id)indoorPlistPath;
- (void)setIndoorPlistPath:(id)arg1;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (void).cxx_destruct;
@end
