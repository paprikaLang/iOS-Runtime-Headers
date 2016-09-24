/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDataStore : NSObject {
    struct sqlite3 { } * _db;
    PETScalarEventTracker * _dbMigrationTracker;
    _ATXDuetHelper * _duetHelper;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    int  _restoreStartedCnt;
    unsigned int  _schemaVersion;
}

+ (id)defaultPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_databaseSchema;
- (void)_disconnectFromDb;
- (void)_removeFeedbackForBundleId:(id)arg1;
- (BOOL)_reset;
- (void)_testMigrate;
- (void)addAppInstallForBundleId:(id)arg1 withDate:(id)arg2;
- (void)addAppLaunchForBundleId:(id)arg1 withDate:(id)arg2 withLaunchType:(int)arg3;
- (void)addHistogramData:(id)arg1 forHistogramOfType:(int)arg2;
- (id)appInfoForBundleId:(id)arg1;
- (void)beginRestoring;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)clearDatabase;
- (int)configureDatabase;
- (int)currentSchemaVersion;
- (void)dealloc;
- (void)deleteLaunchesFollowingBundle:(id)arg1;
- (void)enumerateAppInfoBundlesExecutingBlock:(id /* block */)arg1;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3 readOnly:(BOOL)arg4;
- (void)enumerateStateForAppsReadOnly:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3;
- (void)finishedRestoring;
- (id)getColumnNameForLaunchType:(int)arg1;
- (id)histogramDataForHistogramType:(int)arg1;
- (id)init;
- (id)initWithInMemoryDataStore;
- (id)initWithPath:(id)arg1 andDuetHelper:(id)arg2;
- (int)launchedAppCount;
- (id)loadAppInfo;
- (id)loadDataFromFile:(id)arg1;
- (id)loadLaunchesFollowingBundle:(id)arg1;
- (void)migrate;
- (int)migrateToVersion:(unsigned int)arg1 withMigrationPlan:(id)arg2;
- (int)migration_AppLaunchHistogramToTable;
- (int)migration_DelinkFromCoreLocationVisitMonitoring;
- (int)migration_InstallDateToAppTable;
- (int)migration_LaunchHistoriesToAppTable;
- (int)migration_RemoveAllSubsequentLaunches;
- (int)migration_RemoveFeedbackForUninstalledApps;
- (int)migration_RemoveRestoreUserDefault;
- (void)notifyObserversAboutRestoreCompletion;
- (void)notifyObserversAboutRestoreStart;
- (id)pathsToBackUp;
- (void)removeAllFeedback;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)removeFeedbackForBundleId:(id)arg1;
- (BOOL)removeFile:(id)arg1;
- (int)runMigrationPlan:(id)arg1;
- (void)runQuery:(id)arg1 onPrep:(id /* block */)arg2 onRow:(id /* block */)arg3 onError:(id /* block */)arg4;
- (int)skipFromZeroSchema;
- (void)swapInDuetHelperStub:(id)arg1;
- (BOOL)updateOrInsertHistogramData:(id)arg1 forHistogram:(int)arg2;
- (BOOL)updateOrInsertSubsequentLaunchCountData:(id)arg1 forBundleId:(id)arg2;
- (BOOL)updateOrInsertTimestamp:(int)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3;
- (void)updateSchemaVersionNumberTo:(int)arg1;
- (void)writeLaunches:(id)arg1 followingBundle:(id)arg2;

@end