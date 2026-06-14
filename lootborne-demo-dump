// ============================================================
// Image: Assembly-CSharp.dll
// ============================================================

// Namespace: <global>
class GameLog
{
public:

    // Methods
    static void Log(Il2CppObject* message);  // RVA: 0x4B6130
    static void Log(Il2CppObject* message, Il2CppObject* context);  // RVA: 0x4B60D0
};

// Namespace: <global>
class SpriteCollection : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Sprite[][] sprites; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4B6200
};

// Namespace: <global>
struct MonoScriptData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Byte[][] FilePathsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] TypesData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t TotalTypes; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t TotalFiles; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool IsEditorOnly; // 0x0028
};

// Namespace: <global>
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1
{
public:

    // Methods
    static MonoScriptData Get();  // RVA: 0x4BC600
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
struct Side
{
public:
    // Static fields
    // static Side Right;
    // static Side Left;
    // static Side Above;
    // static Side Below;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ActionButtonTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* tooltipText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Func<System.String> textProvider; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* runtimePanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool usingScenePanel; // 0x0038
        bool isHovering; // 0x0039
        uint8_t pad_003A[0x6]; // 0x003A
        Il2CppString* lastShownText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Side side; // 0x0048
    
        // Methods
        void SetTooltipText(Il2CppString* text);  // RVA: 0x4A7D20
        void SetTooltipTextProvider(System.Func<System.String> provider);  // RVA: 0x4A7D10
        void SetSide(Side s);  // RVA: 0x4A7D00
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4A7AA0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4A7A70
        void OnDisable();  // RVA: 0x4A7A70
        void Update();  // RVA: 0x4A7D50
        void HideTooltip();  // RVA: 0x4A7920
        GameObject* CreateRuntimePanel(Il2CppString* textContent);  // RVA: 0x4A7200
        void .ctor();  // RVA: 0x4A7F20
    };

    // Namespace: AutoBattle.UI
    class ActionTooltipPanel : public MonoBehaviour
    {
    public:
        // Static fields
        // static ActionTooltipPanel* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* panelRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* tooltipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float padding; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float gap; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float maxWidth; // 0x0038
    
        // Methods
        static ActionTooltipPanel* get_Instance();  // RVA: 0x4A8DF0
        static void set_Instance(ActionTooltipPanel* value);  // RVA: 0x4A8E30
        void Awake();  // RVA: 0x4A7F70
        void OnDestroy();  // RVA: 0x4A81F0
        void Show(Il2CppString* text, RectTransform* anchorRect, Side side);  // RVA: 0x4A8920
        static void PositionPanel(RectTransform* panelRect, RectTransform* anchorRect, RectTransform* canvasRT, Side side, float panelWidth, float panelHeight, float gapPx);  // RVA: 0x4A82C0
        void Hide();  // RVA: 0x4A81C0
        static Canvas* GetRootCanvas(Component* c);  // RVA: 0x4A8060
        void .ctor();  // RVA: 0x4A8DD0
    };

    // Namespace: AutoBattle.UI
    class AnimatedHPBar : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float fps; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* fillImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* ghostImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float ghostLingerDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float ghostFadeDuration; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Color ghostLightColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        float currentFill; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t frameIndex; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float frameTimer; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool ghostFading; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float ghostElapsed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Color ghostStartColor; // 0x006C
        uint8_t pad_006D[0xF]; // 0x006D
        Color ghostEndColor; // 0x007C
    
        // Methods
        void Awake();  // RVA: 0x4A8F60
        void OnEnable();  // RVA: 0x4A8FF0
        void Update();  // RVA: 0x4A93F0
        void UpdateFill(float newFill);  // RVA: 0x4A9290
        void SetFillImmediate(float newFill);  // RVA: 0x4A9100
        void TriggerGhost(float oldFill);  // RVA: 0x4A91F0
        static void ApplyFill(Image* img, float value);  // RVA: 0x4A8E90
        void .ctor();  // RVA: 0x4A96A0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <PlayLoop>d__10
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AnimatedIconHover* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B94E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9630
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class AnimatedIconHover : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float fps; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* staticSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Coroutine* animCoroutine; // 0x0040
    
        // Methods
        void Awake();  // RVA: 0x4A96D0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4A97C0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4A97B0
        void OnDisable();  // RVA: 0x4A97B0
        void StopAndReset();  // RVA: 0x4A9930
        IEnumerator* PlayLoop();  // RVA: 0x4A98C0
        void .ctor();  // RVA: 0x4A99E0
    };

    // Namespace: AutoBattle.UI
    class ArenaBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* cieloSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* livello1Sprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* lunaSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] starsFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float starsFrameRate; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t starsTrailingFramesToSkip; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Vector2 moonStart; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 moonEnd; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float moonSpeed; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool moonPingPong; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        RectTransform* cieloLayer; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        RectTransform* starsLayer; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        RectTransform* lunaLayer; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        RectTransform* livello1Layer; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        RectTransform* rect; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Image* starsImage; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int32_t starsFrameIdx; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float starsFrameTimer; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        Image* lunaImage; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float moonT; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t moonDir; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool built; // 0x00A8
    
        // Methods
        void Awake();  // RVA: 0x4A99F0
        void OnEnable();  // RVA: 0x4AA130
        void Build();  // RVA: 0x4A9A50
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size);  // RVA: 0x4A9EE0
        void Update();  // RVA: 0x4AA2C0
        void SetSprites(Sprite* cielo, Sprite[][] stars, Sprite* luna, Sprite* livello1);  // RVA: 0x4AA250
        void .ctor();  // RVA: 0x4AA610
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<System.String> <>9__127_6;
    // static System.Func<System.String> <>9__127_7;
    // static System.Func<System.String> <>9__127_1;
    // static System.Func<System.String> <>9__127_2;
    // static System.Func<System.String> <>9__127_3;
    // static UnityAction* <>9__127_4;
    // static System.Func<System.String> <>9__127_5;
    // static System.Func<System.String> <>9__127_10;
    // static System.Func<System.String> <>9__128_0;
    // static System.Func<System.String> <>9__130_0;


    // Methods
    static void .cctor();  // RVA: 0x4BC420
    void .ctor();  // RVA: 0x4BC410
    Il2CppString* <Start>b__127_6();  // RVA: 0x4BC320
    Il2CppString* <Start>b__127_7();  // RVA: 0x4BC380
    Il2CppString* <Start>b__127_1();  // RVA: 0x4BC1A0
    Il2CppString* <Start>b__127_2();  // RVA: 0x4BC200
    Il2CppString* <Start>b__127_3();  // RVA: 0x4BC260
    void <Start>b__127_4();  // RVA: 0x4B4640
    Il2CppString* <Start>b__127_5();  // RVA: 0x4BC2C0
    Il2CppString* <Start>b__127_10();  // RVA: 0x4BBFF0
    Il2CppString* <AttachPlayerHpTooltip>b__128_0();  // RVA: 0x4BBC30
    Il2CppString* <AttachPlayerXpTooltip>b__130_0();  // RVA: 0x4BBE40
};

// Namespace: <global>
class <>c__DisplayClass190_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* droppedItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ShowPopupCard>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass203_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <RefreshDropsList>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass215_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* weaponInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetEquippedWeaponData>b__0(ItemData* d);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <ApplyDamageVisualsAfterDelay>d__178
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatTurnResult* result; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    BattleScreenUI* <>4__this; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B6760
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B6F40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <CombatEndPopupSequence>d__185
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatResult* result; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool <willShowAnyPopup>5__2; // 0x0030
    bool <delayPanel>5__3; // 0x0031

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B6F80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8010
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FlashBar>d__214
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8190
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B81A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FlashEnemyHitRed>d__208
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Color <orig>5__2; // 0x0028
    uint8_t pad_0029[0xF]; // 0x0029
    Color <red>5__3; // 0x0038
    uint8_t pad_0039[0xF]; // 0x0039
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B81E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8500
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayAnimImage>d__153
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8680
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8850
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayDefeatAnimCoroutine>d__156
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8890
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8A40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayEffectOverlay>d__209
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Image* effectImage; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite[][] effectFrames; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float delaySec; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <frameDuration>5__2; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t <i>5__3; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8A80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8D20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayFadeOutInCoroutine>d__182
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float fadeInDuration; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float fadeOutDuration; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <t>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8D60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9070
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayLevelCompleteAnimCoroutine>d__159
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B92A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B94A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayProjectileImpact>d__222
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemData* weaponData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* canvasRect; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 position; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite[][] <frames>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* <go>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Image* <img>5__4; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float <perFrame>5__5; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t <i>5__6; // 0x0054

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B9670
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9D60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayStaminaBtnIconAnim>d__160
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B9DA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9F00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayVsAnimation>d__184
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <frameDuration>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <elapsed>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B9F40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA180
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <RefreshBattleTextsNextFrame>d__167
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BA1C0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA4D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <RefreshTitleFrameHeightCoroutine>d__267
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BA510
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA690
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <ShowPopupCoroutine>d__187
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* headerText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* subtitleText; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemInstance* dropItem; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float duration; // 0x0040

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BA770
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA970
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <SpawnProjectileSpread>d__217
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemData* weaponData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float extraSpawnDelay; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t count; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    bool suppressLunge; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    BattleScreenUI* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RectTransform* from; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    RectTransform* to; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    SpriteAnimator* lungeAnimator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float <spread>5__2; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float <delay>5__3; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t <pi>5__4; // 0x0060

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BA9B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BACC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <SpawnProjectileVFX>d__221
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RectTransform* from; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* to; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ItemData* weaponData; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float extraSpawnDelay; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteAnimator* lungeAnimator; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    BattleScreenUI* <>4__this; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    bool triggerLungeOnSpawn; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float verticalOffset; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float <travelTime>5__2; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float <arcHeight>5__3; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    RectTransform* <canvasRect>5__4; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Vector2 <fromLocal>5__5; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Vector2 <toLocal>5__6; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sprite[][] <frames>5__7; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* <go>5__8; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    RectTransform* <rt>5__9; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Image* <img>5__10; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Vector2 <dir>5__11; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    float <elapsed>5__12; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t <frameIdx>5__13; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float <frameTimer>5__14; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float <frameDuration>5__15; // 0x00AC

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BAD00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BBBF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <WaitForPopupDurationOrSkip>d__188
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool skippable; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float duration; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    BattleScreenUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float <elapsed>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BC490
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BC5C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class BattleScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Vector2 PlayerSlashOnPlayerPos;
        // static float DAMAGE_APPLY_DELAY;
        // static float WEAPON_PHANTOM_DURATION;
        // static int32_t MAX_LOG_LINES;
        // static float PROJECTILE_TRAVEL_TIME_FALLBACK;
        // static System.Collections.Generic.Dictionary<System.String,System.Single> kEnemyContentCenterOffsetPx;
        // static System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.Single,System.Single>> kEnemyAnimati
        uint8_t pad_0000[0x20]; // 0x0000
        Image* battleBackground; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* battleFrame; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* outskirtsBackground; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* villageBackground; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* graveyardBackground; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* forestBackground; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* arenaBackground; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        RectTransform* titleFrame; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* sectorLabel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        TMP_Text* battleProgressLabel; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Image* sectorBarFill; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        TMP_Text* playerNameText; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        TMP_Text* playerLevelText; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        TMP_Text* playerHpText; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Image* playerHpBarEmpty; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Image* playerHpBarFill; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        TMP_Text* enemyNameText; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        TMP_Text* enemyLevelText; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        TMP_Text* enemyHpText; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* enemyHpBarEmpty; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Image* enemyHpBarFill; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color enemyNameColorVerde; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color enemyNameColorGiallo; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Color enemyNameColorViola; // 0x00E8
        uint8_t pad_00E9[0xF]; // 0x00E9
        TMP_Text* xpLabel; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Image* xpBarFill; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        TMP_Text* battleLevelLabel; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        Image* staminaIconEmpty; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Image* staminaIconFull; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        TMP_Text* staminaLabel; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        GameObject* logPanelOverlay; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        TMP_Text* battleLogText; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        ScrollRect* battleLogScroll; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Button* logToggleButton; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Button* logCloseButton; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        SidePanelController* logSidePanel; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        GameObject* logSelectedOverlay; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        Transform* dropsListParent; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        GameObject* dropItemPrefab; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Button* dropsToggleButton; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        GameObject* dropsSelectedOverlay; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        GameObject* dropsPanelOverlay; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        SidePanelController* dropsSidePanel; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        GameObject* resultPanel; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        TextAnimator_TMP* resultText; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        TMP_Text* rewardText; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        GameObject* resultDropCard; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        GameObject* resultCover; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        Image* animImage; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        Sprite[][] animItemFrames; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        float animFps; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        GameObject* defeatGO; // 0x01D0
        uint8_t pad_01D1[0x7]; // 0x01D1
        Image* defeatImage; // 0x01D8
        uint8_t pad_01D9[0x7]; // 0x01D9
        Sprite[][] defeatFrames; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        float defeatFps; // 0x01E8
        uint8_t pad_01E9[0x7]; // 0x01E9
        GameObject* levelCompleteGO; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        Image* levelCompleteImage; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Sprite[][] levelCompleteFrames; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        float levelCompleteFps; // 0x0208
        uint8_t pad_0209[0x7]; // 0x0209
        Image* staminaBtnIcon; // 0x0210
        uint8_t pad_0211[0x7]; // 0x0211
        Sprite[][] staminaBtnIconFrames; // 0x0218
        uint8_t pad_0219[0x7]; // 0x0219
        float staminaBtnIconFps; // 0x0220
        uint8_t pad_0221[0x7]; // 0x0221
        Coroutine* staminaIconCoroutine; // 0x0228
        uint8_t pad_0229[0x7]; // 0x0229
        Button* settingsToggleButton; // 0x0230
        uint8_t pad_0231[0x7]; // 0x0231
        Sprite* settingsOpenSprite; // 0x0238
        uint8_t pad_0239[0x7]; // 0x0239
        Sprite* settingsClosedSprite; // 0x0240
        uint8_t pad_0241[0x7]; // 0x0241
        GameObject* settingsBar; // 0x0248
        uint8_t pad_0249[0x7]; // 0x0249
        Button* settingsQuitButton; // 0x0250
        uint8_t pad_0251[0x7]; // 0x0251
        Button* settingsOptionsButton; // 0x0258
        uint8_t pad_0259[0x7]; // 0x0259
        Button* settingsStatsButton; // 0x0260
        uint8_t pad_0261[0x7]; // 0x0261
        Button* settingsScaleButton; // 0x0268
        uint8_t pad_0269[0x7]; // 0x0269
        GameObject* settingsPanel; // 0x0270
        uint8_t pad_0271[0x7]; // 0x0271
        Image* playerSpriteImage; // 0x0278
        uint8_t pad_0279[0x7]; // 0x0279
        Image* enemySpriteImage; // 0x0280
        uint8_t pad_0281[0x7]; // 0x0281
        Image* playerSlashImage; // 0x0288
        uint8_t pad_0289[0x7]; // 0x0289
        Image* enemyEffectImage; // 0x0290
        uint8_t pad_0291[0x7]; // 0x0291
        Vector2 parryEffectPos; // 0x0298
        uint8_t pad_0299[0x7]; // 0x0299
        Image* parryEffectImage; // 0x02A0
        uint8_t pad_02A1[0x7]; // 0x02A1
        SpriteCollection* parryEffectCollection; // 0x02A8
        uint8_t pad_02A9[0x7]; // 0x02A9
        Coroutine* parryEffectRoutine; // 0x02B0
        uint8_t pad_02B1[0x7]; // 0x02B1
        Vector2 enemyParryEffectPos; // 0x02B8
        uint8_t pad_02B9[0x7]; // 0x02B9
        Image* enemyParryEffectImage; // 0x02C0
        uint8_t pad_02C1[0x7]; // 0x02C1
        Coroutine* enemyParryEffectRoutine; // 0x02C8
        uint8_t pad_02C9[0x7]; // 0x02C9
        Transform* damagePopupContainer; // 0x02D0
        uint8_t pad_02D1[0x7]; // 0x02D1
        BattleVfxOverlay* battleVfxOverlay; // 0x02D8
        uint8_t pad_02D9[0x7]; // 0x02D9
        GameObject* pvpLabel; // 0x02E0
        uint8_t pad_02E1[0x7]; // 0x02E1
        TMP_Text* suddenDeathLabel; // 0x02E8
        uint8_t pad_02E9[0x7]; // 0x02E9
        CanvasGroup* playerHpBar; // 0x02F0
        uint8_t pad_02F1[0x7]; // 0x02F1
        CanvasGroup* enemyHpBar; // 0x02F8
        uint8_t pad_02F9[0x7]; // 0x02F9
        AnimatedHPBar* playerAnimatedHpBar; // 0x0300
        uint8_t pad_0301[0x7]; // 0x0301
        AnimatedHPBar* enemyAnimatedHpBar; // 0x0308
        uint8_t pad_0309[0x7]; // 0x0309
        SpriteAnimator* playerAnimator; // 0x0310
        uint8_t pad_0311[0x7]; // 0x0311
        SpriteAnimator* enemyAnimator; // 0x0318
        uint8_t pad_0319[0x7]; // 0x0319
        EquipOverlayController* battleOverlay; // 0x0320
        uint8_t pad_0321[0x7]; // 0x0321
        EquipOverlayController* enemyPvPOverlay; // 0x0328
        uint8_t pad_0329[0x7]; // 0x0329
        DamagePopup* damagePopup; // 0x0330
        uint8_t pad_0331[0x7]; // 0x0331
        CombatManager* combatManager; // 0x0338
        uint8_t pad_0339[0x7]; // 0x0339
        System.Collections.Generic.List<System.String> battleLogLines; // 0x0340
        uint8_t pad_0341[0x7]; // 0x0341
        EnemyState* currentEnemy; // 0x0348
        uint8_t pad_0349[0x7]; // 0x0349
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> sessionDrops; // 0x0350
        uint8_t pad_0351[0x7]; // 0x0351
        bool logPanelOpen; // 0x0358
        bool settingsBarOpen; // 0x0359
        uint8_t pad_035A[0x6]; // 0x035A
        GameObject* dropsBadge; // 0x0360
        uint8_t pad_0361[0x7]; // 0x0361
        int32_t seenDropsCount; // 0x0368
        uint8_t pad_0369[0x7]; // 0x0369
        Image* pvpEnemySlashImage; // 0x0370
        uint8_t pad_0371[0x7]; // 0x0371
        bool isPopupSequenceActive; // 0x0378
        uint8_t pad_0379[0x7]; // 0x0379
        Coroutine* activePopupSequence; // 0x0380
        uint8_t pad_0381[0x7]; // 0x0381
        GameObject* fadeOverlayGO; // 0x0388
        uint8_t pad_0389[0x7]; // 0x0389
        Image* fadeOverlayImage; // 0x0390
        uint8_t pad_0391[0x7]; // 0x0391
        bool isFadeActive; // 0x0398
        uint8_t pad_0399[0x7]; // 0x0399
        Image* vsImage; // 0x03A0
        uint8_t pad_03A1[0x7]; // 0x03A1
        int32_t vsFrameRate; // 0x03A8
        uint8_t pad_03A9[0x7]; // 0x03A9
        Sprite[][] vsFrames; // 0x03B0
        uint8_t pad_03B1[0x7]; // 0x03B1
        bool isVsAnimationActive; // 0x03B8
        uint8_t pad_03B9[0x7]; // 0x03B9
        GameObject* playerTooltipHitbox; // 0x03C0
        uint8_t pad_03C1[0x7]; // 0x03C1
        GameObject* enemyTooltipHitbox; // 0x03C8
        uint8_t pad_03C9[0x7]; // 0x03C9
        RectTransform* overlayBattleScreenRT; // 0x03D0
        uint8_t pad_03D1[0x7]; // 0x03D1
        Vector2 playerIdleLocalCanvas; // 0x03D8
        uint8_t pad_03D9[0x7]; // 0x03D9
        bool playerIdleCached; // 0x03E0
        uint8_t pad_03E1[0x3]; // 0x03E1
        Vector2 enemyIdleLocalCanvas; // 0x03E4
        uint8_t pad_03E5[0x7]; // 0x03E5
        bool enemyIdleCached; // 0x03EC
        uint8_t pad_03ED[0x3]; // 0x03ED
        Coroutine* animCoroutine; // 0x03F0
        uint8_t pad_03F1[0x7]; // 0x03F1
        Coroutine* defeatAnimCoroutine; // 0x03F8
        uint8_t pad_03F9[0x7]; // 0x03F9
        Coroutine* levelCompleteAnimCoroutine; // 0x0400
        uint8_t pad_0401[0x7]; // 0x0401
        LeaderboardUI* leaderboardUI; // 0x0408
        uint8_t pad_0409[0x7]; // 0x0409
        bool dropsGridLayoutEnsured; // 0x0410
        uint8_t pad_0411[0x7]; // 0x0411
        Canvas* _cachedWorldCanvas; // 0x0418
        uint8_t pad_0419[0x7]; // 0x0419
        bool _worldCanvasLookupTried; // 0x0420
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4A1B10
        static Il2CppString* T(Il2CppString* key, Object[][] args);  // RVA: 0x4A1AA0
        static Il2CppString* LocalizeEnemyDisplayName(Il2CppString* fullName, Il2CppString* categoryName);  // RVA: 0x49A230
        bool get_IsPopupSequenceActive();  // RVA: 0x4A7000
        bool get_IsFadeActive();  // RVA: 0x4A6FF0
        bool get_IsVsAnimationActive();  // RVA: 0x4A7010
        void Start();  // RVA: 0x49FF40
        void AttachPlayerHpTooltip();  // RVA: 0x48F9D0
        void AttachEnemyHpTooltip();  // RVA: 0x48F840
        void AttachPlayerXpTooltip();  // RVA: 0x48FBF0
        void SetupDamagePopup();  // RVA: 0x49E3E0
        void EnsureTooltipHitboxProxies();  // RVA: 0x493180
        void SyncTooltipHitboxes();  // RVA: 0x499EF0
        void SyncOneTooltipHitbox(GameObject* proxy, Image* targetSprite, Vector2 localOffsetCanvasUnits, bool idleCached, Vector2 idleLocalCanvas);  // RVA: 0x4A1640
        void LateUpdate();  // RVA: 0x499EF0
        void OnEnable();  // RVA: 0x49AC30
        void OnDisable();  // RVA: 0x49A360
        void ToggleLogPanel();  // RVA: 0x4A1E20
        void ToggleDropsPanel();  // RVA: 0x4A1B70
        void SetPanelOverlays(bool log, bool drops);  // RVA: 0x49E0B0
        static void AddTooltipToButton(Button* btn, System.Func<System.String> textProvider, Side side);  // RVA: 0x48F430
        void ToggleSettingsBar();  // RVA: 0x4A1FC0
        void UpdateSettingsToggleIcon();  // RVA: 0x4A6130
        void SetResultPanelActive(bool active, bool showAnim, bool playSfx);  // RVA: 0x49E190
        IEnumerator* PlayAnimImage();  // RVA: 0x49B620
        void PlayDefeatAnimation();  // RVA: 0x49B700
        IEnumerator* PlayDefeatAnimCoroutine();  // RVA: 0x49B690
        void PlayLevelCompleteAnimation();  // RVA: 0x49BBE0
        IEnumerator* PlayLevelCompleteAnimCoroutine();  // RVA: 0x49BB70
        IEnumerator* PlayStaminaBtnIconAnim();  // RVA: 0x49BFC0
        void OnQuitClicked();  // RVA: 0x49B4A0
        void OnLeaderboardClicked();  // RVA: 0x49B3C0
        void ToggleSettingsPanel();  // RVA: 0x4A2120
        void RefreshBattleUI();  // RVA: 0x49C2B0
        void HandleLanguageChanged();  // RVA: 0x497EB0
        IEnumerator* RefreshBattleTextsNextFrame();  // RVA: 0x49C240
        void EnsureSuddenDeathLabel();  // RVA: 0x492D00
        void UpdateProgressDisplay(int32_t sector);  // RVA: 0x4A54D0
        void UpdatePlayerHpDisplay(PlayerState* player);  // RVA: 0x4A5190
        void UpdateEnemyHpDisplay(EnemyState* enemy);  // RVA: 0x4A35D0
        void UpdateXpDisplay(PlayerState* player);  // RVA: 0x4A6400
        void UpdateStaminaDisplay(PlayerState* player);  // RVA: 0x4A6210
        void RefreshEnemyNameLabel(EnemyState* enemy);  // RVA: 0x49D320
        void HandleCombatStart(EnemyState* enemy);  // RVA: 0x496C10
        void HandleCombatTurn(CombatTurnResult* result);  // RVA: 0x497720
        IEnumerator* ApplyDamageVisualsAfterDelay(CombatTurnResult* result, float delay);  // RVA: 0x48F7A0
        void HandleCombatEnd(CombatResult* result);  // RVA: 0x495A40
        void HandleStaminaDepleted();  // RVA: 0x497F40
        void EnsureFadeOverlay();  // RVA: 0x492270
        IEnumerator* PlayFadeOutInCoroutine(float fadeInDuration, float fadeOutDuration);  // RVA: 0x49BAD0
        void StartVsSplash();  // RVA: 0x49FE10
        IEnumerator* PlayVsAnimation();  // RVA: 0x49C030
        IEnumerator* CombatEndPopupSequence(CombatResult* result);  // RVA: 0x491890
        static bool ShouldShowAnyPopup(CombatResult* result);  // RVA: 0x49F3E0
        IEnumerator* ShowPopupCoroutine(Il2CppString* headerText, Il2CppString* subtitleText, ItemInstance* dropItem, float duration);  // RVA: 0x49F6F0
        IEnumerator* WaitForPopupDurationOrSkip(float duration, bool skippable);  // RVA: 0x4A67E0
        bool PopupSkipClickedThisFrame();  // RVA: 0x49C0A0
        void ShowPopupCard(ItemInstance* droppedItem);  // RVA: 0x49F440
        static Il2CppString* WrapWave(CombatResult* result, Il2CppString* body);  // RVA: 0x4A6880
        Il2CppString* BuildSectorClearedText(CombatResult* result);  // RVA: 0x491140
        Il2CppString* BuildArenaActivatedText(CombatResult* result);  // RVA: 0x48FE10
        static Il2CppString* BuildLevelUpText(CombatResult* result);  // RVA: 0x490870
        static Il2CppString* BuildPvPResultText(CombatResult* result);  // RVA: 0x490AC0
        static Il2CppString* BuildPvPRewardSubtitle(CombatResult* result);  // RVA: 0x490E20
        static Il2CppString* BuildArenaWaveClearedText(CombatResult* result);  // RVA: 0x490340
        static Il2CppString* BuildArenaWaveProgressText(CombatResult* result);  // RVA: 0x490650
        static Il2CppString* BuildArenaDefeatText(CombatResult* result);  // RVA: 0x490160
        void SpawnDamagePopup(CombatTurnResult* result);  // RVA: 0x49F7D0
        void HandleHealTick(int32_t healAmount);  // RVA: 0x497C20
        void HandleEnemyHealTick(int32_t healAmount);  // RVA: 0x4977E0
        void RefreshDropsList();  // RVA: 0x49C8B0
        void EnsureDropsGridLayout();  // RVA: 0x491E00
        GameObject* CreateDropLabel(Il2CppString* text, Color color);  // RVA: 0x491BD0
        void TriggerHitAnimation(bool hitPlayer);  // RVA: 0x4A2300
        IEnumerator* FlashEnemyHitRed();  // RVA: 0x493BF0
        IEnumerator* PlayEffectOverlay(Image* effectImage, Sprite[][] effectFrames, float delaySec);  // RVA: 0x49B840
        void PlayParryEffect();  // RVA: 0x49BD20
        void EnsureParryEffectImage();  // RVA: 0x4928F0
        void PlayEnemyParryEffect();  // RVA: 0x49B8E0
        void EnsureEnemyParryEffectImage();  // RVA: 0x491E80
        IEnumerator* FlashBar(CanvasGroup* bar);  // RVA: 0x493BA0
        ItemData* GetEquippedWeaponData(Il2CppString* slotKey);  // RVA: 0x495330
        ItemData* GetPvPEnemyWeaponData(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x495550
        IEnumerator* SpawnProjectileSpread(RectTransform* from, RectTransform* to, int32_t count, ItemData* weaponData, SpriteAnimator* lungeAnimator, float extraSpawnDelay, bool suppressLunge);  // RVA: 0x49FC10
        Canvas* FindWorldCanvas();  // RVA: 0x493A70
        IEnumerator* SpawnProjectileVFX(RectTransform* from, RectTransform* to, float verticalOffset, ItemData* weaponData, bool triggerLungeOnSpawn, SpriteAnimator* lungeAnimator, float extraSpawnDelay);  // RVA: 0x49FD10
        IEnumerator* PlayProjectileImpact(RectTransform* canvasRect, Vector2 position, ItemData* weaponData);  // RVA: 0x49BF10
        void AppendBattleLog(Il2CppString* line);  // RVA: 0x48F560
        SpriteCollection* LoadSlashSottoCollection();  // RVA: 0x49A170
        SpriteCollection* LoadSlashSopraCollection();  // RVA: 0x49A120
        SpriteCollection* LoadSlashAttack3Collection();  // RVA: 0x49A080
        SpriteCollection* LoadSlashRightAboveCollection();  // RVA: 0x49A0D0
        SpriteCollection* LoadMagicAttackCollection();  // RVA: 0x49A030
        bool HasAnyMeleeWeaponEquipped();  // RVA: 0x498140
        bool IsMeleeInSlot(PlayerState* ps, Il2CppString* slotKey);  // RVA: 0x499760
        bool IsRangedInSlot(PlayerState* ps, Il2CppString* slotKey);  // RVA: 0x499D20
        void RefreshPlayerAttackAnimationGate();  // RVA: 0x49D4D0
        static Attack2Mode ResolveAttack2Mode(bool meleeArma1, bool meleeArma2);  // RVA: 0x49DCB0
        bool HasPvPMeleeWeaponEquipped(EnemyState* enemy);  // RVA: 0x498210
        bool IsPvPMeleeInSlot(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x499910
        bool IsPvPRangedInSlot(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x499B10
        void RefreshPlayerSlashSprites();  // RVA: 0x49D630
        Color GetWeapon1SlashColor();  // RVA: 0x4958C0
        Color GetWeapon2SlashColor();  // RVA: 0x495980
        Color GetElementSlashColor(ElementCategory cat);  // RVA: 0x493D90
        Il2CppString* GetCharacterIdleResourceSuffix();  // RVA: 0x493C60
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x49DDA0
        static Il2CppString* ResolveCharacterAttackPrefix(CharacterType c);  // RVA: 0x49DCD0
        void InitPlayerSprite();  // RVA: 0x498450
        void UpdateEnemySprite(EnemyState* enemy);  // RVA: 0x4A3880
        void SetupPvPEnemyOverlay(EnemyState* enemy);  // RVA: 0x49E6A0
        void SetupPvPTooltip(EnemyState* enemy);  // RVA: 0x49F190
        void ClearPvPTooltip();  // RVA: 0x4917C0
        void SetupPvETooltip(EnemyState* enemy);  // RVA: 0x49E540
        void ClearPvETooltip();  // RVA: 0x4916F0
        float ComputeEnemyAlignedY(Il2CppString* categoryName, float frameSize, float displaySize);  // RVA: 0x491920
        EnemyCategoryData* FindEnemyCategoryData(Il2CppString* categoryName);  // RVA: 0x493710
        Il2CppString* GetEnemySpriteResource(Il2CppString* categoryName);  // RVA: 0x494E90
        Il2CppString* GetEnemyAttackResource(Il2CppString* categoryName);  // RVA: 0x494060
        Il2CppString* GetEnemyHitResource(Il2CppString* categoryName);  // RVA: 0x4949A0
        Il2CppString* GetEnemyDeathResource(Il2CppString* categoryName);  // RVA: 0x494500
        Il2CppString* GetEnemyAttackEffectResource(Il2CppString* categoryName);  // RVA: 0x493E90
        Color GetEnemyNameColor(EnemyColor color);  // RVA: 0x494E40
        void OnRestClicked();  // RVA: 0x49B590
        void SetEnemyHpVisible(bool visible);  // RVA: 0x49DF60
        Color GetRarityColor(Il2CppString* rarity);  // RVA: 0x495750
        void SetBarFill(Image* fillImage, float value);  // RVA: 0x49DE70
        void UpdateSectorBackground(int32_t sectorIndex);  // RVA: 0x4A5CC0
        void RefreshTitleFrameHeight();  // RVA: 0x49DBA0
        IEnumerator* RefreshTitleFrameHeightCoroutine();  // RVA: 0x49DB30
        void .ctor();  // RVA: 0x4A6EA0
        static void .cctor();  // RVA: 0x4A6900
        void <Start>b__127_0();  // RVA: 0x4A32D0
        void <Start>b__127_8();  // RVA: 0x4A33B0
        void <Start>b__127_9();  // RVA: 0x4A3480
        Il2CppString* <AttachEnemyHpTooltip>b__129_0();  // RVA: 0x4A3170
        void <ToggleSettingsPanel>b__164_0();  // RVA: 0x4A3550
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class ElementVfxMapping
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ElementCategory category; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameObject* vfxPrefab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 position; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float displaySize; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Sprite[][] frames; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t repeatCount; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float repeatSpread; // 0x003C

    // Methods
    void .ctor();  // RVA: 0x4AF240
};

// Namespace: <global>
class VfxSlot
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameObject* vfxPrefab; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 position; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float displaySize; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite[][] frames; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class ElementPositionEntry
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ElementCategory category; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    Vector2 position; // 0x0014
    uint8_t pad_0015[0x7]; // 0x0015
    bool overridePosition; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float displaySize; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4AF230
};

// Namespace: <global>
class PerEnemyVfxOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* enemyCategoryName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool overrideCrit; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector2 critPosition; // 0x001C
    uint8_t pad_001D[0x7]; // 0x001D
    float critDisplaySize; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool overrideHeal; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 healPosition; // 0x002C
    uint8_t pad_002D[0x7]; // 0x002D
    float healDisplaySize; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.ElementPositionEntry> elementOverrides; // 0x0038

    // Methods
    void .ctor();  // RVA: 0x4B6180
};

// Namespace: <global>
class <DelayedVfxAt>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BattleVfxOverlay* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RectTransform* anchor; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite[][] frames; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float size; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float duration; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Vector2 position; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Vector2 offset; // 0x0050

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8050
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8150
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayFlipbook>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite[][] frames; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float duration; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Image* img; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* host; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t <n>5__2; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float <perFrame>5__3; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B90B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9260
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class BattleVfxOverlay : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* PLAYER_TARGET_KEY;
        // static Il2CppString* PVP_CATEGORY_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* canvasRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        RawImage* overlayRawImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        VfxSlot* critVfx; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        VfxSlot* healVfx; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        VfxSlot* meleeSlashVfx; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.ElementVfxMapping> elementVfxMappings; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.PerEnemyVfxOverride> perEnemyOverrides; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float vfxDisplaySize; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float vfxDuration; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float elementalDisplaySize; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float elementalDuration; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Color slashColorFrost; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        Color slashColorFlame; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        Color slashColorArcane; // 0x0088
        uint8_t pad_0089[0xF]; // 0x0089
        Color slashColorHoly; // 0x0098
        uint8_t pad_0099[0xF]; // 0x0099
        Color slashColorShadow; // 0x00A8
        uint8_t pad_00A9[0xF]; // 0x00A9
        Il2CppString* projectileSpritesResource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* projectileImpactSpritesResource; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float projectileTravelTime; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float projectileSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float projectileImpactSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float projectileImpactDuration; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float projectileArcHeight; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t projectileAttack2Count; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float projectileSpreadOffset; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float projectileSpreadDelay; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool projectileRotateToDirection; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color projectileTint; // 0x00EC
        uint8_t pad_00ED[0xF]; // 0x00ED
        Color projectileImpactTint; // 0x00FC
        uint8_t pad_00FD[0x13]; // 0x00FD
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,AutoBattle.UI.BattleVfxOverlay.ElementVfxMapping> elementMappingLookup; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        System.Collections.Generic.Dictionary<System.String,AutoBattle.UI.BattleVfxOverlay.PerEnemyVfxOverride> perEnemyOverrideLookup; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CombatManager* _combatManager; // 0x0120
    
        // Methods
        Color GetSlashTintFor(ElementCategory cat);  // RVA: 0x4AB1B0
        Il2CppString* get_ProjectileSpritesResource();  // RVA: 0x4AC890
        Il2CppString* get_ProjectileImpactSpritesResource();  // RVA: 0x4AC830
        float get_ProjectileTravelTime();  // RVA: 0x4AC8B0
        float get_ProjectileSize();  // RVA: 0x4AC860
        float get_ProjectileImpactSize();  // RVA: 0x4AC820
        float get_ProjectileImpactDuration();  // RVA: 0x4AC810
        float get_ProjectileArcHeight();  // RVA: 0x4AC7F0
        int32_t get_ProjectileAttack2Count();  // RVA: 0x4AC800
        float get_ProjectileSpreadOffset();  // RVA: 0x4AC880
        float get_ProjectileSpreadDelay();  // RVA: 0x4AC870
        bool get_ProjectileRotateToDirection();  // RVA: 0x4AC850
        Color get_ProjectileTint();  // RVA: 0x4AC8A0
        Color get_ProjectileImpactTint();  // RVA: 0x4AC840
        void Awake();  // RVA: 0x4AA650
        void OnEnable();  // RVA: 0x4AB510
        void OnDisable();  // RVA: 0x4AB3B0
        void HandleCombatEnd(CombatResult* result);  // RVA: 0x4AB220
        void BuildLookup();  // RVA: 0x4AA6F0
        PerEnemyVfxOverride* GetEnemyOverride(Il2CppString* targetEnemyCategory);  // RVA: 0x4AAFA0
        Vector2 MirrorPositionForPlayerTargetIfNeeded(Vector2 position, Il2CppString* targetEnemyCategory, bool overrideApplied);  // RVA: 0x4AB2C0
        void PlayCritAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4AB680
        bool PlayMeleeSlashAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4ABE70
        void PlayHealAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4ABC10
        bool PlayElementalAt(RectTransform* anchor, ElementCategory element, Il2CppString* targetEnemyCategory);  // RVA: 0x4AB7D0
        IEnumerator* DelayedVfxAt(RectTransform* anchor, Sprite[][] frames, float size, float duration, Vector2 position, Vector2 offset, float delay);  // RVA: 0x4AAEA0
        void CleanupAllVfx();  // RVA: 0x4AAA70
        static bool IsVfxObject(Il2CppString* name);  // RVA: 0x4AB230
        RectTransform* GetRootCanvasRect();  // RVA: 0x4AB040
        void PlayVfxAt(RectTransform* anchor, Sprite[][] frames, float displaySize, float duration, Vector2 position, Vector2 additionalOffset);  // RVA: 0x4ABFD0
        IEnumerator* PlayFlipbook(Image* img, GameObject* host, Sprite[][] frames, float duration);  // RVA: 0x4ABB60
        void .ctor();  // RVA: 0x4AC580
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <ShowDemoSaveNoticeNextFrame>d__12
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4BA6D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA730
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class CreationScreenUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_InputField* nameInput; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Dropdown* genderDropdown; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* startButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t maxNameLength; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* avatarPreview; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite* character1IdleSprite; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* character2IdleSprite; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* character3IdleSprite; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* character4IdleSprite; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* character5IdleSprite; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* character6IdleSprite; // 0x0070
    
        // Methods
        void OnEnable();  // RVA: 0x4AC8C0
        IEnumerator* ShowDemoSaveNoticeNextFrame();  // RVA: 0x4AD090
        void Start();  // RVA: 0x4AD0E0
        void UpdateAvatarPreview(int32_t index);  // RVA: 0x4AD4E0
        void OnStartButtonClicked();  // RVA: 0x4ACB90
        static void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4ACD30
        void .ctor();  // RVA: 0x4AD5C0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimatePopup>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* popupGO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* rt; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_Text* text; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DamagePopup* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 <startPos>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector2 <endPos>5__3; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Color <startColor>5__4; // 0x0050
    uint8_t pad_0051[0xF]; // 0x0051
    Outline* <outline>5__5; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Color <outlineStartColor>5__6; // 0x0068
    uint8_t pad_0069[0xF]; // 0x0069
    float <wigglePhase>5__7; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float <elapsed>5__8; // 0x007C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B6210
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B66F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DamagePopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Color COLOR_NORMAL;
        // static float POPUP_LIFETIME;
        // static float FLOAT_DISTANCE;
        // static float FONT_SIZE_NORMAL;
        // static float FONT_SIZE_CRIT;
        // static float FONT_SIZE_PARRY;
        // static Il2CppString* TEMPLATE_KEY_BASE;
        // static Il2CppString* TEMPLATE_KEY_CRIT;
        // static Il2CppString* TEMPLATE_KEY_PARRY;
        // static Il2CppString* TEMPLATE_KEY_HEAL;
        // static Color COLOR_CRIT;
        // static Color COLOR_PARRY;
        // static Color COLOR_HEAL;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* popupContainer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float damageReference; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float fontSizeMaxMultiplier; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Color colorDamageLow; // 0x0030
        uint8_t pad_0031[0xF]; // 0x0031
        Color colorDamageMid; // 0x0040
        uint8_t pad_0041[0xF]; // 0x0041
        Color colorDamageHigh; // 0x0050
        uint8_t pad_0051[0xF]; // 0x0051
        float wiggleAmplitude; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float wiggleFrequency; // 0x0064
    
        // Methods
        void SetContainer(Transform* container);  // RVA: 0x4ADCC0
        void ShowDamage(RectTransform* anchor, int32_t damage, bool isCrit, bool isParry);  // RVA: 0x4ADCD0
        void ShowHeal(RectTransform* anchor, int32_t healAmount);  // RVA: 0x4AE080
        GameObject* SpawnPopup(RectTransform* anchor, Il2CppString* templateKey);  // RVA: 0x4AE300
        GameObject* BuildDefaultPopup();  // RVA: 0x4AD690
        void ClearAllPopups();  // RVA: 0x4AD870
        IEnumerator* AnimatePopup(GameObject* popupGO, RectTransform* rt, TMP_Text* text);  // RVA: 0x4AD5D0
        float GetDynamicFontSize(float baseSize, int32_t damage);  // RVA: 0x4ADC50
        Color GetDynamicDamageColor(int32_t damage);  // RVA: 0x4ADB40
        void .ctor();  // RVA: 0x4AE7E0
        static void .cctor();  // RVA: 0x4AE750
    };

    // Namespace: AutoBattle.UI
    class DemoSaveNoticePopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static DemoSaveNoticePopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Button* gotItButton; // 0x0028
    
        // Methods
        static DemoSaveNoticePopup* get_SceneInstance();  // RVA: 0x4AEF50
        void OnDestroy();  // RVA: 0x4AE8B0
        static void ResetStatics();  // RVA: 0x4AE970
        static void TryShow();  // RVA: 0x4AEB60
        void Show();  // RVA: 0x4AE9E0
        void Dismiss();  // RVA: 0x4AE830
        void .ctor();  // RVA: 0x4AEF40
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <ForceHeightNextFrame>d__2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    DropdownHeightFixer* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4B8540
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8640
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DropdownHeightFixer : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float fixedHeight; // 0x0020
    
        // Methods
        void OnEnable();  // RVA: 0x4AF1A0
        IEnumerator* ForceHeightNextFrame();  // RVA: 0x4AF130
        void .ctor();  // RVA: 0x4AF220
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass100_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetItemTemplateForSlot>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass101_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetDefaultWeaponSpriteForSlot>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass107_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetOverlaySpriteForSlot>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class EquipOverlayController : public MonoBehaviour
    {
    public:
        // Static fields
        // static Vector2 FemaleHeadDelta;
        // static Vector2 FemaleBodyDelta;
        // static Vector2 FemaleWeapon2Delta;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Image* headOverlayImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* bodyOverlayImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* weaponOverlayImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* weapon2OverlayImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* weapon2HandOverlayImage; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Vector2 headSize; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 bodySize; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Vector2 weaponSize; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Vector2 weapon2Size; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Vector2 weapon2HandSize; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Vector2 weapon2HandOffset; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        bool weapon2HandEnabled; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float pixelScale; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        EquipAnchorData* anchorData; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        EquipAnchorData* maleAnchorData; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        EquipAnchorData* femaleAnchorData; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Vector2 weapon2BaseOffset; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float anchorRefPixelScale; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        Vector2 refPlayerAnchoredPos; // 0x00A4
        uint8_t pad_00A5[0xB]; // 0x00A5
        Sprite* defaultHeadSprite; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite* defaultBodySprite; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite* defaultSwordSprite; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Sprite* defaultAxeSprite; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Sprite* defaultShieldSprite; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Sprite* defaultSpearSprite; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Sprite* defaultHandSprite; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Sprite* defaultHandSpriteBlack; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        bool isCharacter4; // 0x00F0
        bool spritesLoaded; // 0x00F1
        bool currentIsAttacking; // 0x00F2
        uint8_t pad_00F3[0x1]; // 0x00F3
        int32_t currentFrame; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        int32_t currentAttackVariant; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool weaponVisible; // 0x00FC
        bool weapon2Visible; // 0x00FD
        uint8_t pad_00FE[0x2]; // 0x00FE
        Sprite[][] weapon1AnimFrames; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        float weapon1AnimFps; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        float weapon1AnimTimer; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        int32_t weapon1AnimIndex; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Sprite[][] weapon2AnimFrames; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        float weapon2AnimFps; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float weapon2AnimTimer; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        int32_t weapon2AnimIndex; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        Sprite[][] headAnimFrames; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        float headAnimFps; // 0x0138
        uint8_t pad_0139[0x3]; // 0x0139
        float headAnimTimer; // 0x013C
        uint8_t pad_013D[0x3]; // 0x013D
        int32_t headAnimIndex; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Sprite[][] attackOverlayFrames1; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        float attackOverlayFps1; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float attackOverlayTimer1; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        int32_t attackOverlayIndex1; // 0x0158
        uint8_t pad_0159[0x3]; // 0x0159
        bool attackOverlayPlaying1; // 0x015C
        uint8_t pad_015D[0x3]; // 0x015D
        AttackOverlayMode attackOverlayMode1; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        Sprite* attackOverlayRestoreSprite1; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Vector2 attackOverlayRestoreSize1; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Sprite[][] attackOverlayFrames2; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        float attackOverlayFps2; // 0x0180
        uint8_t pad_0181[0x3]; // 0x0181
        float attackOverlayTimer2; // 0x0184
        uint8_t pad_0185[0x3]; // 0x0185
        int32_t attackOverlayIndex2; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        bool attackOverlayPlaying2; // 0x018C
        uint8_t pad_018D[0x3]; // 0x018D
        AttackOverlayMode attackOverlayMode2; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Sprite* attackOverlayRestoreSprite2; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        Vector2 attackOverlayRestoreSize2; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        Image* weapon1AttackOverlayImage; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        Image* weapon2AttackOverlayImage; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        bool useFixedPositions; // 0x01B8
        uint8_t pad_01B9[0x3]; // 0x01B9
        Vector2 fixedHeadPos; // 0x01BC
        uint8_t pad_01BD[0x7]; // 0x01BD
        Vector2 fixedBodyPos; // 0x01C4
        uint8_t pad_01C5[0x7]; // 0x01C5
        Vector2 fixedWeaponPos; // 0x01CC
        uint8_t pad_01CD[0x7]; // 0x01CD
        Vector2 fixedWeapon2Pos; // 0x01D4
        uint8_t pad_01D5[0x7]; // 0x01D5
        bool isFemaleCharacter; // 0x01DC
        bool mirrorX; // 0x01DD
        uint8_t pad_01DE[0x2]; // 0x01DE
        Vector2 mirrorHostIdlePos; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool hasMirrorHostIdlePos; // 0x01E8
        bool pvpModeActive; // 0x01E9
        bool pvpWeapon2IsShield; // 0x01EA
        uint8_t pad_01EB[0x5]; // 0x01EB
        System.Collections.Generic.Dictionary<System.String,AutoBattle.Steam.EquippedItemInfo> pvpItemBySlot; // 0x01F0
    
        // Methods
        RectTransform* get_Weapon1OverlayRect();  // RVA: 0x4B5F70
        RectTransform* get_Weapon2OverlayRect();  // RVA: 0x4B6020
        float GetEffectiveAnchorRefPixelScale();  // RVA: 0x4B0E60
        void Awake();  // RVA: 0x4AF370
        void Update();  // RVA: 0x4B5720
        void PlayWeaponAttackAnim(Il2CppString* slotKey);  // RVA: 0x4B2450
        void LoadResources();  // RVA: 0x4B1A10
        void EnsureOverlayImages();  // RVA: 0x4B0140
        Image* CreateAttackOverlayChild(Il2CppString* objName, Transform* parent);  // RVA: 0x4AF960
        Image* CreateHandChild(Transform* parent, Il2CppString* objName, Vector2 size, Vector2 localOffset);  // RVA: 0x4AFB80
        Image* CreateOverlaySibling(Il2CppString* objName, Vector2 size, bool behind);  // RVA: 0x4AFF00
        Image* CreateOverlayChild(Il2CppString* objName, Vector2 size);  // RVA: 0x4AFD40
        void Configure(Vector2 headSz, Vector2 bodySz, Vector2 weaponSz, float pxScale, Vector2 weapon2Sz);  // RVA: 0x4AF610
        void RefreshOverlays();  // RVA: 0x4B3290
        void UpdateHandOverlayVisibility();  // RVA: 0x4B48E0
        bool IsWeapon2Shield();  // RVA: 0x4B1840
        void SetHandOverlayEnabled(bool enabled);  // RVA: 0x4B4470
        void ConfigureHandOverlay(Vector2 size, Vector2 localOffset);  // RVA: 0x4AF520
        void RefreshWeaponSlotOverlay(Image* overlayImage, System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey, bool visible);  // RVA: 0x4B37F0
        ItemData* GetItemTemplateForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B0F00
        Sprite* GetDefaultWeaponSpriteForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B06F0
        void OnAnimationFrameChanged(bool isAttacking, int32_t frameIndex, int32_t attackVariant);  // RVA: 0x4B20B0
        void SetWeaponVisible(bool visible);  // RVA: 0x4B47A0
        void SetWeapon2Visible(bool visible);  // RVA: 0x4B4660
        void UpdateOverlayPositions();  // RVA: 0x4B4A50
        void RefreshSlotOverlay(Image* overlayImage, Sprite* defaultSprite, System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B3540
        Sprite* GetOverlaySpriteForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B1060
        bool IsSlotOccupied(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, Il2CppString* slotKey);  // RVA: 0x4B1680
        void RefreshFromPvPItems(System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> pvpItems);  // RVA: 0x4B2B10
        void ApplyPvPSlotSprite(Image* overlayImage, EquippedItemInfo* info, Sprite* fallbackDefault, bool weaponVisibleGate, bool useWeapon2Gate);  // RVA: 0x4AF260
        Sprite* ResolvePvPItemSprite(EquippedItemInfo* info, Sprite* fallbackDefault);  // RVA: 0x4B3B40
        Sprite* PickWeaponDefault(EquippedItemInfo* info);  // RVA: 0x4B20D0
        static bool IsShieldName(Il2CppString* itemName);  // RVA: 0x4B1550
        static bool IsSpearName(Il2CppString* itemName);  // RVA: 0x4B1710
        static bool IsAxeName(Il2CppString* itemName);  // RVA: 0x4B1440
        void HideAllOverlays();  // RVA: 0x4B12C0
        void SetFixedPositions(Vector2 headPos, Vector2 weaponPos, bool flipWeapon, Vector2 bodyPos, Vector2 weapon2Pos);  // RVA: 0x4B4000
        void ClearFixedPositions();  // RVA: 0x4AF380
        void SetMirrorX(bool mirror);  // RVA: 0x4B44A0
        void SetCharacterType(CharacterType characterType);  // RVA: 0x4B3E10
        void SetFemaleMode(bool female);  // RVA: 0x4B3F00
        void SetOffsets(Vector2 head, Vector2 weapon);  // RVA: 0x4B4640
        void SetSizes(Vector2 head, Vector2 weapon);  // RVA: 0x4B4650
        Sprite* GetWeapon1Sprite();  // RVA: 0x4B1230
        void .ctor();  // RVA: 0x4B5E90
        static void .cctor();  // RVA: 0x4B5E10
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct CrossSynergyEntryData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slotName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* itemName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ElementCategory itemCategory; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bonusText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* context; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ElementCategory targetCategory; // 0x0038
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slotKey; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <Start>b__1();  // RVA: 0x4D3150
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <RefreshSlot>b__0(ItemData* id);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass46_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* inst; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <DetectActiveCrossSynergies>b__0(ItemInstance* it);  // RVA: 0x4D3410
    bool <DetectActiveCrossSynergies>b__1(ItemData* it);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass46_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* inst; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <DetectActiveCrossSynergies>b__2(ItemInstance* it);  // RVA: 0x4D3410
    bool <DetectActiveCrossSynergies>b__3(ItemData* it);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass48_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedItem; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <UpdateSlotDisplay>b__0(ItemData* id);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass48_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slot; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    <>c__DisplayClass48_0* CS$<>8__locals1; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <UpdateSlotDisplay>b__1();  // RVA: 0x4D3460
};

// Namespace: <global>
class <>c__DisplayClass58_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <PopulateSlotPanelItems>b__0(ItemData* id);  // RVA: 0x4BC3E0
    bool <PopulateSlotPanelItems>b__1(ItemData* id);  // RVA: 0x4D3240
};

// Namespace: <global>
class <>c__DisplayClass61_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* slot; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <CreateItemCard>b__0(ItemData* id);  // RVA: 0x4BC3E0
    bool <CreateItemCard>b__1(ItemData* id);  // RVA: 0x4D3240
    void <CreateItemCard>b__2(ItemInstance* _);  // RVA: 0x4D34C0
};

// Namespace: <global>
class <>c__DisplayClass61_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool equippedHereAtBuild; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* itemCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemCardUI* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass61_0* CS$<>8__locals1; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateItemCard>b__3();  // RVA: 0x4D3620
};

// Namespace: <global>
class <>c__DisplayClass88_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetSynergyBonusDescriptions>b__0(ItemInstance* it);  // RVA: 0x4D3410
    bool <GetSynergyBonusDescriptions>b__1(ItemData* it);  // RVA: 0x4D3430
};

// Namespace: <global>
class <RefreshEquipTextsNextFrame>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EquipScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4D2F90
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D3110
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class EquipScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static String[][] SlotKeys;
        // static Vector2[][] SlotPositions;
        // static String[][] StatLabelNames;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] slotObjects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text[][] statLabels; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Toggle* statsAllocationToggle; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        StatsAllocationUI* statsAllocationUI; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* statsAllocationNewBadge; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* statsOverlay; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* itemPanelRoot; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Transform* itemPanelContent; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        ScrollRect* itemPanelScroll; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        GameObject* slotButtonPrefab; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        GameObject* itemCardPrefab; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Button* backButton; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* inventoryButton; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        TMP_Text* panelTitle; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Button* closeButton; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Button* unequipButton; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        TMP_Dropdown* rarityFilterDropdown; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        TMP_Dropdown* elementFilterDropdown; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        float dropdownTemplatePadding; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        System.Nullable<AutoBattle.Data.Rarity> currentRarityFilter; // 0x00B4
        uint8_t pad_00B5[0x7]; // 0x00B5
        System.Nullable<AutoBattle.Data.ElementCategory> currentElementFilter; // 0x00BC
        uint8_t pad_00BD[0x7]; // 0x00BD
        bool filtersWired; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        Transform* synergyParent; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        GameObject* synergyIconPrefab; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Image* equipPlayerSpriteImage; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        SpriteAnimator* equipPlayerAnimator; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        EquipOverlayController* equipOverlay; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Il2CppString* selectedSlot; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        ItemCardUI* currentSelectedCard; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        SlotButtonUI* currentSelectedSlot; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> cachedSynergies; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        System.Collections.Generic.HashSet<System.String> cachedSlotsWithCrossSynergy; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        System.Collections.Generic.List<AutoBattle.UI.EquipScreenUI.CrossSynergyEntryData> cachedCrossSynergyEntries; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        int32_t statsOverlayAcknowledgedPoints; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        int32_t previewHpPts; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        int32_t previewAtkPts; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        int32_t previewDefPts; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        int32_t previewCritPts; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        int32_t previewParryPts; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        bool parryTooltipAttached; // 0x0138
        bool critTooltipAttached; // 0x0139
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4C5D40
        static Il2CppString* GetSlotDisplayName(Il2CppString* slotKey);  // RVA: 0x4C1170
        bool HasNewItemForSlot(Il2CppString* slotName);  // RVA: 0x4C1F30
        void Start();  // RVA: 0x4C5770
        void OnEnable();  // RVA: 0x4C2BE0
        void HandleLanguageChanged();  // RVA: 0x4C1EB0
        IEnumerator* RefreshEquipTextsNextFrame();  // RVA: 0x4C4470
        void OnDisable();  // RVA: 0x4C2980
        void RefreshEquip();  // RVA: 0x4C44E0
        void RefreshSlot(GameObject* slotObj, Il2CppString* slotName);  // RVA: 0x4C4750
        void DetectActiveCrossSynergies();  // RVA: 0x4BE360
        static ElementCategory ParseElementName(Il2CppString* name);  // RVA: 0x4C3650
        void UpdateSlotDisplay(GameObject* slotObj, Il2CppString* slotName);  // RVA: 0x4C5FC0
        Il2CppString* GetCategoryIcon(ElementCategory cat);  // RVA: 0x4C0D90
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x4C5320
        void InitEquipPlayerSprite();  // RVA: 0x4C2260
        void OnSlotClicked(Il2CppString* slotName);  // RVA: 0x4C2EE0
        void OpenSlotPanel(Il2CppString* slot);  // RVA: 0x4C3400
        void ApplyFilterDropdownLocalization();  // RVA: 0x4BC8A0
        void EnsureFilterDropdownsWired();  // RVA: 0x4C03B0
        void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4C4C40
        void EnsureDropdownScrollbar(TMP_Dropdown* dropdown);  // RVA: 0x4BFC70
        void PopulateSlotPanelItems();  // RVA: 0x4C3770
        void PositionItemPanelOutside();  // RVA: 0x4C3FF0
        void SetItemPanelActive(bool active);  // RVA: 0x4C53F0
        void CreateItemCard(ItemInstance* itemInstance, Il2CppString* slot);  // RVA: 0x4BDE00
        void RefreshAllSlotMarkers();  // RVA: 0x4C4310
        void OnItemSelected(ItemInstance* itemInstance, Il2CppString* slot, ItemCardUI* cardUI);  // RVA: 0x4C2DF0
        void ClosePanel();  // RVA: 0x4BD5B0
        void EnsureStatLabels();  // RVA: 0x4C09D0
        void UpdateStatDisplay();  // RVA: 0x4C64C0
        static Il2CppString* WrapPreview(Il2CppString* value, bool active);  // RVA: 0x4C7AA0
        void SetStatLabel(int32_t index, Il2CppString* label, Il2CppString* value);  // RVA: 0x4C5480
        void OnStatsAllocationToggled(bool isOn);  // RVA: 0x4C3100
        void RefreshStatsAllocationDot();  // RVA: 0x4C4AC0
        void ApplyAllocationPreview(int32_t hpPts, int32_t atkPts, int32_t defPts, int32_t critPts, int32_t parryPts);  // RVA: 0x4BC870
        void EnsureCritTooltip();  // RVA: 0x4BFAB0
        void EnsureParryTooltip();  // RVA: 0x4C0810
        void UpdateSynergyDisplay();  // RVA: 0x4C7080
        void BuildCrossSynergyEntries();  // RVA: 0x4BD120
        void CreateCrossSynergyEntry(CrossSynergyEntryData entry, int32_t idx);  // RVA: 0x4BD6C0
        static Il2CppString* GetItemCategoryHex(ElementCategory cat);  // RVA: 0x4C0FD0
        void UpdateSynergyRow(Transform* row, Il2CppString* element, int32_t count);  // RVA: 0x4C74C0
        Il2CppString* GetSynergyBonusDescriptions(Il2CppString* element, int32_t count);  // RVA: 0x4C1470
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4C10A0
        Color GetElementColor(Il2CppString* element);  // RVA: 0x4C0E60
        EquipSlot SlotNameToEnum(Il2CppString* slotName);  // RVA: 0x4C55E0
        void OnUnequipClicked();  // RVA: 0x4C32F0
        void OnBackClicked();  // RVA: 0x4C2920
        void OnInventoryClicked();  // RVA: 0x4C2D90
        void .ctor();  // RVA: 0x4C7EF0
        static void .cctor();  // RVA: 0x4C7B10
        void <Start>b__33_0();  // RVA: 0x4C5FB0
        void <EnsureFilterDropdownsWired>b__55_0(int32_t idx);  // RVA: 0x4C5DA0
        void <EnsureFilterDropdownsWired>b__55_1(int32_t idx);  // RVA: 0x4C5E50
    };

    // Namespace: AutoBattle.UI
    class EquipSlotTooltip : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* slotDisplayName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* itemLine; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* runtimePanel; // 0x0030
    
        // Methods
        void Setup(Il2CppString* displayName, Il2CppString* itemInfo);  // RVA: 0x4C9670
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4C94A0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4C9490
        void OnDisable();  // RVA: 0x4C9490
        void Hide();  // RVA: 0x4C9390
        GameObject* CreateRuntimePanel(Il2CppString* text);  // RVA: 0x4C8A70
        void .ctor();  // RVA: 0x4C96B0
    };

    // Namespace: AutoBattle.UI
    class EquipSlotTooltipPanel : public MonoBehaviour
    {
    public:
        // Static fields
        // static EquipSlotTooltipPanel* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* panelRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* tooltipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* slotNameBG; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* slotNameText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float padding; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float gap; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float maxWidth; // 0x0048
    
        // Methods
        static EquipSlotTooltipPanel* get_Instance();  // RVA: 0x4C88B0
        void Awake();  // RVA: 0x4C8050
        void OnDestroy();  // RVA: 0x4C8290
        void Show(Il2CppString* text, RectTransform* anchorRect);  // RVA: 0x4C8340
        void Show(Il2CppString* header, Il2CppString* text, RectTransform* anchorRect);  // RVA: 0x4C8360
        void Hide();  // RVA: 0x4A81C0
        static Canvas* GetRootCanvas(Component* c);  // RVA: 0x4C8130
        void .ctor();  // RVA: 0x4C8890
    };

    // Namespace: AutoBattle.UI
    class ForestBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* alberiSpritea; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* nebbiaSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] birdFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float pixelScale; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool applyPixelScaleToBackground; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float birdFrameRate; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float birdFlySpeed; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float birdBobAmplitude; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float birdBobPeriod; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float birdBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float birdRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float birdRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float birdYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float fogScrollSpeed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Color fogTint; // 0x006C
        uint8_t pad_006D[0xF]; // 0x006D
        float fogYOffset; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        RectTransform* bgLayer; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        RectTransform* birdLayer; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        RectTransform* alberiLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* fogContainerRT; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* fogART; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* fogBRT; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* rect; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* birdImage; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t birdFrame; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float birdTimer; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float birdX; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float birdCurrentBaseY; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float birdPhase; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float birdRespawnTimer; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        bool birdActive; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float birdHalfWidth; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float fogTileWidth; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        bool built; // 0x00E4
    
        // Methods
        void Awake();  // RVA: 0x4C9720
        void OnEnable();  // RVA: 0x4CA4E0
        void Build();  // RVA: 0x4C9780
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4CA300
        RectTransform* CreateFogTile(Il2CppString* name, Transform* parent, Vector2 size, float xOffset);  // RVA: 0x4CA180
        void Update();  // RVA: 0x4CA740
        void SetSprites(Sprite* bg, Sprite* alberi, Sprite* nebbia, Sprite[][] bird);  // RVA: 0x4CA6D0
        void .ctor();  // RVA: 0x4CAE00
    };

    // Namespace: AutoBattle.UI
    class ForgeRowHover : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool interactive; // 0x0028
    
        // Methods
        void SetTargetImage(Image* image);  // RVA: 0x4CB080
        void SetInteractive(bool value);  // RVA: 0x4CAFF0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4CAEE0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4CAF70
        void OnDisable();  // RVA: 0x4CAE60
        void .ctor();  // RVA: 0x4CB110
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ForgeScreenUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Rarity srcCopy; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Rarity tgtCopy; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t neededCopy; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <WireForgeRow>b__0();  // RVA: 0x4D3180
};

// Namespace: <global>
class <>c__DisplayClass37_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* featureName; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <EnsureDemoLockOverlay>b__0();  // RVA: 0x4D31C0
};

// Namespace: <global>
class <>c__DisplayClass40_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <PopulateForgeItems>b__0(ItemData* id);  // RVA: 0x4BC3E0
    bool <PopulateForgeItems>b__1(ItemData* id);  // RVA: 0x4D3240
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ForgeScreenUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instanceCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t neededCopy; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateForgeItemCard>b__0();  // RVA: 0x4D3270
};

// Namespace: <global>
class <>c__DisplayClass49_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* newItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ShowForgeResultPopup>b__0(ItemData* id);  // RVA: 0x4BC3E0
    bool <ShowForgeResultPopup>b__1(ItemData* id);  // RVA: 0x4D3240
};

// Namespace: <global>
class <AutoHideForgeResultPopup>d__52
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ForgeScreenUI* <>4__this; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4D2BD0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D2C90
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PlayForgeAnimImage>d__54
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ForgeScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4D2CD0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D2EA0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PositionActionPanelDeferred>d__32
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ForgeScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4D2EE0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D2F50
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ForgeScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static ValueTuple`4[][] forgeOptions;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* actionPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* cover; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* coverSecondary; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* forgeRarityPanel; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* forgeScrollContent; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* itemCardPrefab; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Dropdown* slotDropdown; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Dropdown* elementDropdown; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* counterText; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* backButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Toggle* selAllToggle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        GameObject* selAllRedDotOn; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* forgeExecuteButton; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* forgeResultPopupRoot; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Image* forgeAnimImage; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Sprite[][] forgeAnimFrames; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float forgeAnimFps; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SidePanelController* sidePanel; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        bool isOpen; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        Rarity forgeSourceRarity; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        Rarity forgeTargetRarity; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        int32_t forgeNeededCount; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        Il2CppString* currentSlotFilter; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Il2CppString* currentElementFilter; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> forgeSelectedItems; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        System.Collections.Generic.Dictionary<AutoBattle.Data.ItemInstance,UnityEngine.GameObject> forgeCardMap; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        GameObject* forgeResultPopup; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Coroutine* forgeResultPopupRoutine; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Coroutine* forgeAnimCoroutine; // 0x00F0
    
        // Methods
        bool get_IsOpen();  // RVA: 0x4D1730
        void Awake();  // RVA: 0x4CB9D0
        void Open();  // RVA: 0x4CE720
        void Close();  // RVA: 0x4CBBB0
        IEnumerator* PositionActionPanelDeferred();  // RVA: 0x4CF070
        void PositionActionPanel();  // RVA: 0x4CF0E0
        void PositionCover();  // RVA: 0x4B4640
        void ShowForgeRarityPanel();  // RVA: 0x4CF500
        void WireForgeRow(GameObject* rowGO, Rarity sourceRarity, Rarity targetRarity, Il2CppString* label, int32_t needed);  // RVA: 0x4D0C60
        void EnsureDemoLockOverlay(GameObject* target, bool show, Il2CppString* analyticsFeatureName);  // RVA: 0x4CC2C0
        void EnsureLockOverlay(GameObject* target, bool show);  // RVA: 0x4CCA70
        void OnForgeRaritySelected(Rarity sourceRarity, Rarity targetRarity, int32_t needed);  // RVA: 0x4CE090
        void PopulateForgeItems();  // RVA: 0x4CEBC0
        void CreateForgeItemCard(ItemData* itemData, ItemInstance* itemInstance);  // RVA: 0x4CBF60
        void ToggleForgeItemSelection(ItemInstance* item, GameObject* cardObj, int32_t needed);  // RVA: 0x4D03E0
        void OnBackClicked();  // RVA: 0x4CD890
        void OnSelAllToggled(bool isOn);  // RVA: 0x4CE2B0
        void OnForgeExecute();  // RVA: 0x4CDB10
        void ShowForgeResultPopup(ItemInstance* newItem);  // RVA: 0x4CFA40
        static void HideClickToDismissHint(GameObject* popup);  // RVA: 0x4CD3F0
        void AutoSizePopup();  // RVA: 0x4CB6C0
        IEnumerator* AutoHideForgeResultPopup(float delay);  // RVA: 0x4CB640
        void HideForgeResultPopup();  // RVA: 0x4CD5C0
        IEnumerator* PlayForgeAnimImage();  // RVA: 0x4CEB50
        void SetCoversActive(bool active);  // RVA: 0x4CF430
        Color GetRarityTextColor(Rarity rarity);  // RVA: 0x4CD370
        void WireFilterDropdowns();  // RVA: 0x4D0A20
        void ApplyForgeFilterLocalization();  // RVA: 0x4CB120
        void OnFilterChanged();  // RVA: 0x4CDAF0
        void ResetFilters();  // RVA: 0x4CF320
        static bool MatchesSlotFilter(EquipSlot slot, Il2CppString* filter);  // RVA: 0x4CD730
        void UpdateCounter();  // RVA: 0x4D07B0
        void UpdateForgeExecuteButton();  // RVA: 0x4D0980
        void ClearForgeItems();  // RVA: 0x4CBB40
        void ClearForgeCards();  // RVA: 0x4CBA20
        static int32_t CountUnequippedByRarity(Rarity rarity);  // RVA: 0x4CBDC0
        static Transform* FindChildByName(Transform* root, Il2CppString* childName);  // RVA: 0x4CD140
        static TMP_Text* FindChildTMP(Transform* root, Il2CppString* childName);  // RVA: 0x4CD2A0
        void Toggle();  // RVA: 0x4D0580
        void .ctor();  // RVA: 0x4D1600
        static void .cctor();  // RVA: 0x4D1390
        void <WireFilterDropdowns>b__57_0(int32_t idx);  // RVA: 0x4D05A0
        void <WireFilterDropdowns>b__57_1(int32_t idx);  // RVA: 0x4D06C0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <RepositionAfterMonitorSwitch>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameFrameDragger* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PointerEventData* eventData; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 direction; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2 <pointerScreen>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Camera* <pressCam>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4EC3A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC810
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class GameFrameDragger : public MonoBehaviour
    {
    public:
        // Static fields
        // static float SWITCH_COOLDOWN_SECONDS;
        // static int32_t TRANSITION_FRAMES;
        // static float EDGE_PUSH_THRESHOLD;
        // static float CORNER_SNAP_THRESHOLD;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* frameRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool rightButtonOnly; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RectTransform* canvasRect; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Vector2 pointerStartLocal; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Vector2 frameStartAnchored; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool dragging; // 0x0048
        bool switchedThisDrag; // 0x0049
        uint8_t pad_004A[0x2]; // 0x004A
        float switchCooldownUntil; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        bool isTransitioning; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float edgePushAccumulator; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        Vector2 lastEdgeDirection; // 0x0058
    
        // Methods
        void Awake();  // RVA: 0x4D1740
        RectTransform* ResolveFrameRoot();  // RVA: 0x4D2520
        RectTransform* ResolveCanvasRect();  // RVA: 0x4D2420
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x4D2120
        void OnDrag(PointerEventData* eventData);  // RVA: 0x4D1A90
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x4D22F0
        void TrySnapToNearestCorner();  // RVA: 0x4D2730
        Vector2 GetEdgeDirection(RectTransform* fr, RectTransform* cr, float margin);  // RVA: 0x4D18A0
        IEnumerator* RepositionAfterMonitorSwitch(Vector2 direction, PointerEventData* eventData);  // RVA: 0x4D2370
        void .ctor();  // RVA: 0x4D2B70
    };

    // Namespace: AutoBattle.UI
    class GraveyardBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSottoSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* backgroundSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] batFrames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] spiderFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float pixelScale; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool applyPixelScaleToBackground; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float batFrameRate; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float batFlySpeed; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float batBobAmplitude; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float batBobPeriod; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float batBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float batRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float batRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float batYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float spiderFrameRate; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool spiderStatic; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        Vector2 spiderFixedPosition; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float spiderWalkSpeed; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float spiderBaseY; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float spiderRespawnMin; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float spiderRespawnMax; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float spiderYJitter; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        bool spiderWalksRight; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        RectTransform* bgSottoLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* batLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* bgLayer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* spiderLayer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* rect; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* batImage; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t batFrameIdx; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float batTimer; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float batX; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float batCurrentBaseY; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float batPhase; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float batRespawnTimer; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        bool batActive; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float batHalfWidth; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        Image* spiderImage; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        int32_t spiderFrameIdx; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float spiderTimer; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float spiderX; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float spiderCurrentBaseY; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float spiderRespawnTimer; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool spiderActive; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float spiderHalfWidth; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        bool built; // 0x0104
    
        // Methods
        void Awake();  // RVA: 0x4D3980
        void OnEnable();  // RVA: 0x4D4640
        void Build();  // RVA: 0x4D39E0
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4D4460
        void Update();  // RVA: 0x4D4660
        void SetSprites(Sprite* bgSotto, Sprite* bg, Sprite[][] bat, Sprite[][] spider);  // RVA: 0x4CA6D0
        void .ctor();  // RVA: 0x4D4E20
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<System.String> <>9__66_5;
    // static System.Func<System.String> <>9__66_6;
    // static System.Func<System.String> <>9__66_7;
    // static System.Func<System.String> <>9__66_8;
    // static System.Func<System.String> <>9__66_0;
    // static System.Func<System.String> <>9__66_1;
    // static System.Func<System.String> <>9__66_2;
    // static UnityAction* <>9__66_3;
    // static System.Func<System.String> <>9__66_4;
    // static System.Func<System.String> <>9__67_0;
    // static System.Func<System.String> <>9__68_0;
    // static System.Func<System.String> <>9__71_0;
    // static System.Func<System.String> <>9__72_0;


    // Methods
    static void .cctor();  // RVA: 0x4ED810
    void .ctor();  // RVA: 0x4BC410
    Il2CppString* <Start>b__66_5();  // RVA: 0x4ED2E0
    Il2CppString* <Start>b__66_6();  // RVA: 0x4ED4E0
    Il2CppString* <Start>b__66_7();  // RVA: 0x4ED580
    Il2CppString* <Start>b__66_8();  // RVA: 0x4ED620
    Il2CppString* <Start>b__66_0();  // RVA: 0x4ED060
    Il2CppString* <Start>b__66_1();  // RVA: 0x4ED100
    Il2CppString* <Start>b__66_2();  // RVA: 0x4ED1A0
    void <Start>b__66_3();  // RVA: 0x4B4640
    Il2CppString* <Start>b__66_4();  // RVA: 0x4ED240
    Il2CppString* <AttachHomePwrTooltip>b__67_0();  // RVA: 0x4ECAF0
    Il2CppString* <AttachHomeRankTooltip>b__68_0();  // RVA: 0x4ECB90
    Il2CppString* <AttachHomeHpTooltip>b__71_0();  // RVA: 0x4EC850
    Il2CppString* <AttachHomeXpTooltip>b__72_0();  // RVA: 0x4ECDA0
};

// Namespace: <global>
class <PlayBattleIconAnim>d__78
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    HomeScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4EBF40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC0A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <RefreshHomeNextFrame>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    HomeScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4EC240
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC360
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class HomeScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Rarity[][] forgeSourceRarities;
        // static int32_t FORGE_NEEDED;
    
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* steamNameText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* nameText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* levelText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* xpLabel; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* psValueText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* sectorLabel; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Text* staminaLabel; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Text* hpLabel; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* battleTimeLabel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Image* xpBarFill; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Image* staminaBarFill; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Image* hpBarFill; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        AnimatedHPBar* homeAnimatedHpBar; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Image* homePlayerSpriteImage; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        SpriteAnimator* homePlayerAnimator; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        EquipOverlayController* homeOverlay; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* outskirtsBackground; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* villageBackground; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        GameObject* graveyardBackground; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        GameObject* forestBackground; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        GameObject* restBackground; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        GameObject* avatarPlaceholder; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Button* equipButton; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        GameObject* equipDropsBadge; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Button* inventoryButton; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        GameObject* inventoryDropsBadge; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Button* forgeButton; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        GameObject* forgeDropsBadge; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Button* battleButton; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Button* resetButton; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        ForgeScreenUI* forgeScreenUI; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        GameObject* equipSelectedOverlay; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        GameObject* inventorySelectedOverlay; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        GameObject* forgeSelectedOverlay; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        HoverSlideButton* equipHoverSlide; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        HoverSlideButton* inventoryHoverSlide; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        HoverSlideButton* forgeHoverSlide; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Image* battleButtonFillOverlay; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        Image* battleButtonIcon; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        Sprite[][] battleButtonIconFrames; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        float battleButtonIconFps; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        Coroutine* battleIconCoroutine; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Button* homeSettingsToggleButton; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Sprite* homeSettingsOpenSprite; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Sprite* homeSettingsClosedSprite; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        GameObject* homeSettingsBar; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        Button* homeSettingsQuitButton; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Button* homeSettingsOptionsButton; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        Button* homeSettingsStatsButton; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        Button* homeSettingsScaleButton; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        GameObject* settingsPanel; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        bool homeSettingsBarOpen; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        TMP_Text* battleButtonText; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        TMP_Text* playFabStatusText; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        TMP_Text* rpTierText; // 0x01D0
        uint8_t pad_01D1[0x7]; // 0x01D1
        TMP_Text* rpValueText; // 0x01D8
        uint8_t pad_01D9[0x7]; // 0x01D9
        LeaderboardUI* leaderboardUI; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool isBattleActive; // 0x01E8
        uint8_t pad_01E9[0x3]; // 0x01E9
        float pfStatusTimer; // 0x01EC
        uint8_t pad_01ED[0x3]; // 0x01ED
        bool subscribedToRanking; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        System.Collections.Generic.Dictionary<AutoBattle.Data.Rarity,System.Int32> forgeBadgeSnapshot; // 0x01F8
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4DA770
        static Il2CppString* T(Il2CppString* key, Object[][] args);  // RVA: 0x4DA700
        void Update();  // RVA: 0x4DBD40
        void Start();  // RVA: 0x4D9480
        void AttachHomePwrTooltip();  // RVA: 0x4D5200
        void AttachHomeRankTooltip();  // RVA: 0x4D5350
        static void AttachTooltipOnTextAndSibling(TMP_Text* valueText, Il2CppString* siblingName, System.Func<System.String> textProvider);  // RVA: 0x4D5810
        static void AttachTextProviderTooltip(GameObject* host, System.Func<System.String> textProvider);  // RVA: 0x4D56B0
        void AttachHomeHpTooltip();  // RVA: 0x4D4FF0
        void AttachHomeXpTooltip();  // RVA: 0x4D54A0
        void OnDestroy();  // RVA: 0x4D67C0
        void OnEnable();  // RVA: 0x4D6C10
        void OnDisable();  // RVA: 0x4D6850
        void StartBattleIconAnim();  // RVA: 0x4D9360
        void StopBattleIconAnim();  // RVA: 0x4DA6B0
        IEnumerator* PlayBattleIconAnim();  // RVA: 0x4D7A50
        void HandleEquipmentChanged();  // RVA: 0x4D5C40
        void HandleLanguageChanged();  // RVA: 0x4D5FE0
        IEnumerator* RefreshHomeNextFrame();  // RVA: 0x4D7AC0
        void RefreshHome();  // RVA: 0x4D7B30
        void UpdateBattleButtonUI();  // RVA: 0x4DAB90
        static void OverwriteSiblingLabel(TMP_Text* valueText, Il2CppString* siblingName, Il2CppString* newLabel);  // RVA: 0x4D78B0
        void UpdateRankLabel();  // RVA: 0x4DB390
        void UpdatePlayFabStatus();  // RVA: 0x4DAD70
        void OnEquipClicked();  // RVA: 0x4D7010
        void OnInventoryClicked();  // RVA: 0x4D7520
        void OnForgeClicked();  // RVA: 0x4D7180
        void SnapshotForgeThresholds();  // RVA: 0x4D91D0
        void OnBattleClicked();  // RVA: 0x4D6730
        void OnResetClicked();  // RVA: 0x4D7860
        void OnQuitClicked();  // RVA: 0x4D7770
        void OnLeaderboardClicked();  // RVA: 0x4D7690
        static void AddTooltipToButton(Button* btn, System.Func<System.String> textProvider, Side side);  // RVA: 0x4D4EC0
        void ToggleHomeSettingsBar();  // RVA: 0x4DA7D0
        void UpdateHomeToggleIcon();  // RVA: 0x4DAC90
        void ToggleSettingsPanel();  // RVA: 0x4DA930
        void HandleBattleStateChange(bool isActive);  // RVA: 0x4D5C30
        void HandleRPChanged(int32_t rp, int32_t delta, RankTier tier);  // RVA: 0x4D6060
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x4D59E0
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x4D8E40
        void InitHomePlayerSprite();  // RVA: 0x4D6070
        void SetBarFill(Image* fillImage, float value);  // RVA: 0x4D8F10
        void SetButtonOverlays(bool equip, bool inventory, bool forge);  // RVA: 0x4D8FD0
        void UpdateSectorBackground();  // RVA: 0x4DB770
        void .ctor();  // RVA: 0x4DC460
        static void .cctor();  // RVA: 0x4DC3D0
        void <ToggleSettingsPanel>b__98_0();  // RVA: 0x4DAB10
    };

    // Namespace: AutoBattle.UI
    class HoverSlideButton : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* buttonImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RectTransform* iconTransform; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* iconImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        RectTransform* badgeTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Vector2 badgeIdlePos; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 badgeVisiblePos; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AnimationCurve* badgeEasingCurve; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        float badgeAnimationDuration; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float idleOffsetX; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float visibleOffsetX; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float animationDuration; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float progress; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float badgeProgress; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        bool isHovered; // 0x0078
        bool isSelected; // 0x0079
        bool isInitialized; // 0x007A
    
        // Methods
        void Awake();  // RVA: 0x4DC8B0
        void OnEnable();  // RVA: 0x4DC930
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4DC940
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4DC950
        void SetSelected(bool selected);  // RVA: 0x4DC960
        void Update();  // RVA: 0x4DC970
        void ApplyState();  // RVA: 0x4DC4F0
        void .ctor();  // RVA: 0x4DCB50
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct ItemRarity
{
public:
    // Static fields
    // static ItemRarity All;
    // static ItemRarity Common;
    // static ItemRarity Rare;
    // static ItemRarity Epic;
    // static ItemRarity Legendary;
    // static ItemRarity Mythic;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AutoBattle.Data.ItemInstance> <>9__41_0;


    // Methods
    static void .cctor();  // RVA: 0x4ED7A0
    void .ctor();  // RVA: 0x4BC410
    int32_t <RefreshItemGrid>b__41_0(ItemInstance* a, ItemInstance* b);  // RVA: 0x4ED030
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Int32> onChanged; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateFilterDropdown>b__0(int32_t idx);  // RVA: 0x4ED6C0
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <RefreshItemGrid>b__1(ItemData* id);  // RVA: 0x4BC3E0
    bool <RefreshItemGrid>b__2(ItemData* id);  // RVA: 0x4D3240
};

// Namespace: <global>
class <>c__DisplayClass44_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InventoryScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <CreateItemCard>b__0(ItemData* id);  // RVA: 0x4BC3E0
    bool <CreateItemCard>b__1(ItemData* id);  // RVA: 0x4D3240
};

// Namespace: <global>
class <>c__DisplayClass44_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemData* itemDataCopy; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instanceCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass44_0* CS$<>8__locals1; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateItemCard>b__2();  // RVA: 0x4ED6E0
};

// Namespace: <global>
class <>c__DisplayClass50_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* featureName; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <EnsureDemoLockOverlay>b__0();  // RVA: 0x4ED720
};

// Namespace: <global>
class <PositionActionPanelDeferred>d__31
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4EC0E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC150
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <ReapplyDropdownLocalizationNextFrame>d__30
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4EC190
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC200
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class InventoryScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Color dropdownBgColor;
        // static Color dropdownItemColor;
        // static Color dropdownHighlightColor;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* filterParent; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* filterButtonPrefab; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* gridParent; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* itemCardPrefab; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* backButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* equipButton; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ScrollRect* itemScrollRect; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float dropdownTemplatePadding; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        GameObject* actionPanel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* actionEquipButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Button* sellButton; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        ItemData* selectedItem; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        ItemInstance* selectedInstance; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* selectedCardObj; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GameObject* floatingButtonsPanel; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        ItemRarity currentRarityFilter; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Il2CppString* currentElementFilter; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Il2CppString* currentSlotFilter; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        TMP_Dropdown* rarityDropdown; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        TMP_Dropdown* slotDropdown; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        TMP_Dropdown* elementDropdown; // 0x00C0
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4E54C0
        void Start();  // RVA: 0x4E5250
        void EnsureScrollMaskConfigured();  // RVA: 0x4E1D60
        void OnEnable();  // RVA: 0x4E3030
        void HandleLanguageChanged();  // RVA: 0x4E2520
        IEnumerator* ReapplyDropdownLocalizationNextFrame();  // RVA: 0x4E34C0
        IEnumerator* PositionActionPanelDeferred();  // RVA: 0x4E3210
        void PositionActionPanel();  // RVA: 0x4E3280
        void OnDisable();  // RVA: 0x4E2D30
        void RefreshInventory();  // RVA: 0x4E3810
        void ApplyDropdownLocalization();  // RVA: 0x4DCBB0
        void WireDropdownCallbacks();  // RVA: 0x4E59B0
        void CreateFilterButtons();  // RVA: 0x4DD8B0
        TMP_Dropdown* CreateFilterDropdown(Il2CppString* name, Transform* parent, System.Collections.Generic.List<System.String> options, int32_t defaultIndex, System.Action<System.Int32> onChanged);  // RVA: 0x4DEC70
        void EnsureDropdownScrollbar(TMP_Dropdown* dropdown);  // RVA: 0x4E1620
        void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4E48B0
        void RefreshItemGrid();  // RVA: 0x4E3FC0
        bool MatchesRarityFilter(Rarity rarityEnum, ItemRarity filter);  // RVA: 0x4E2640
        bool MatchesSlotFilter(EquipSlot slot, Il2CppString* filter);  // RVA: 0x4E2690
        void CreateItemCard(ItemInstance* itemInstance);  // RVA: 0x4E0960
        void SelectItem(ItemData* item, ItemInstance* instance, GameObject* cardObj);  // RVA: 0x4E4F90
        void ApplySelectionHighlight(GameObject* cardObj);  // RVA: 0x4DD7F0
        void RemoveSelectionHighlight(GameObject* cardObj);  // RVA: 0x4E47F0
        void HideFloatingButtons();  // RVA: 0x4E25A0
        void RefreshActionButtons();  // RVA: 0x4E3530
        void EnsureDemoLockOverlay(GameObject* target, bool show, Il2CppString* analyticsFeatureName);  // RVA: 0x4E0E90
        void RefreshGridOnly();  // RVA: 0x4E37A0
        void OnActionEquipClicked();  // RVA: 0x4E27F0
        void OnActionSellClicked();  // RVA: 0x4E2B90
        Il2CppString* GetFirstCompatibleSlot(EquipSlot slot);  // RVA: 0x4E2000
        Il2CppString* GetSlotDisplayName(EquipSlot slot);  // RVA: 0x4E2350
        void OnBackClicked();  // RVA: 0x4E2CE0
        void OnEquipClicked();  // RVA: 0x4E31C0
        Il2CppString* GetCategoryIcon(ElementCategory cat);  // RVA: 0x4E1F30
        Color GetRarityColor(Rarity rarity);  // RVA: 0x4E2200
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4E2280
        Color GetRarityTextColor(Rarity rarity);  // RVA: 0x4CD370
        void .ctor();  // RVA: 0x4E5CA0
        static void .cctor();  // RVA: 0x4E5C20
        void <WireDropdownCallbacks>b__36_0(int32_t idx);  // RVA: 0x4E5520
        void <WireDropdownCallbacks>b__36_1(int32_t idx);  // RVA: 0x4E57A0
        void <WireDropdownCallbacks>b__36_2(int32_t idx);  // RVA: 0x4E58C0
        void <CreateFilterButtons>b__37_0(int32_t idx);  // RVA: 0x4E5520
        void <CreateFilterButtons>b__37_1(int32_t idx);  // RVA: 0x4E5590
        void <CreateFilterButtons>b__37_2(int32_t idx);  // RVA: 0x4E56B0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimateIcon>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float fps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ItemCardUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <frameIndex>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <delay>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x4EBD90
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EBF00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ItemCardUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* equippedBG; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* icon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* rarityFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* elementDot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* selectionFrame; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* selectedFrame; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* elementFire; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* elementIce; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* elementHoly; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* elementArcane; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* elementShadow; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* rarityFrameSprite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite* equippedFrameSprite; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Sprite* selectionFrameSprite; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite[][] iconAnimFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        float iconAnimFps; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Coroutine* iconAnimCoroutine; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* newBadge; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        ItemInstance* boundInstance; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Action<AutoBattle.Data.ItemInstance> OnMarkedAsSeen; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        bool suppressMarkAsSeen; // 0x00C0
        bool _isSelected; // 0x00C1
        uint8_t pad_00C2[0x6]; // 0x00C2
        RectTransform* _viewportRect; // 0x00C8
    
        // Methods
        ItemInstance* get_BoundInstance();  // RVA: 0x4E71E0
        void add_OnMarkedAsSeen(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x4E7120
        void remove_OnMarkedAsSeen(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x4E71F0
        void Setup(ItemData* itemData, ItemInstance* itemInstance, bool isEquipped, bool isSelected);  // RVA: 0x4E6A50
        void HideNewBadge();  // RVA: 0x4E5E60
        void RefreshNewBadge();  // RVA: 0x4E63E0
        void MarkAsSeen();  // RVA: 0x4E60D0
        void SetSelected(bool selected);  // RVA: 0x4E66A0
        void LateUpdate();  // RVA: 0x4E5EF0
        static bool RectFullyInside(RectTransform* a, RectTransform* b);  // RVA: 0x4E62E0
        void SetEquipped(bool equipped, Rarity rarity);  // RVA: 0x4E6480
        Sprite* GetElementSprite(ElementCategory category);  // RVA: 0x4E5DB0
        IEnumerator* AnimateIcon(float fps);  // RVA: 0x4E5D30
        void OnEnable();  // RVA: 0x4E6200
        void OnDisable();  // RVA: 0x4E61B0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4E60D0
        static Color GetRarityBrightColor(Rarity rarity);  // RVA: 0x4E5DF0
        void .ctor();  // RVA: 0x4AEF40
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedCtx; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ResolveEquippedItemForComparison>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass29_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* shieldEquipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ResolveEquippedItemForComparison>b__1(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <>c__DisplayClass29_2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ResolveEquippedItemForComparison>b__2(ItemData* t);  // RVA: 0x4BC3E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ItemTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static GameObject* activeTooltip;
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_INSIDE_FRACTION;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        ItemData* itemData; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ItemInstance* itemInstance; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* tooltipPanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* contextSlotKey; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* headerText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool suppressEquippedLabel; // 0x0048
    
        // Methods
        void Setup(ItemData* data, ItemInstance* instance);  // RVA: 0x4EB7B0
        void Setup(ItemData* data, ItemInstance* instance, Il2CppString* explicitSlotKey);  // RVA: 0x4EB810
        void SetHeader(Il2CppString* header);  // RVA: 0x4EB790
        void SetSuppressEquippedLabel(bool suppress);  // RVA: 0x4EB7A0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4EAB60
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4EAB50
        void OnDisable();  // RVA: 0x4EAB50
        void HideSelf();  // RVA: 0x4EA950
        GameObject* CreateTooltipPanel();  // RVA: 0x4E8B00
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x4E94D0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x4E72B0
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x4EAC80
        static RectTransform* FindDirectChildOfParent(RectTransform* child, RectTransform* root);  // RVA: 0x4E92F0
        Il2CppString* BuildTooltipContent();  // RVA: 0x4E77F0
        static Il2CppString* FormatStatLine(Il2CppString* label, float value, float equippedValue, Il2CppString* baseColor, bool showDiff);  // RVA: 0x4E99F0
        static Il2CppString* FormatStatLinePercent(Il2CppString* label, float value, float equippedValue, Il2CppString* baseColor, bool showDiff);  // RVA: 0x4E9620
        bool TryComputePowerScoreDelta(int32_t delta);  // RVA: 0x4EB880
        Il2CppString* ResolveSimulationSlotKey(PlayerState* ps);  // RVA: 0x4EB660
        ItemData* ResolveEquippedItemForComparison(EquipSlot slot);  // RVA: 0x4EB1C0
        static String[][] GetSlotKeys(EquipSlot slot);  // RVA: 0x4EA340
        Il2CppString* GetSlotName(EquipSlot slot);  // RVA: 0x4EA550
        Il2CppString* GetRarityName(Rarity rarity);  // RVA: 0x4EA150
        Il2CppString* GetElementName(ElementCategory category);  // RVA: 0x4E9E90
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4EA080
        Il2CppString* GetElementHexColor(ElementCategory category);  // RVA: 0x4E9DC0
        static void HideActiveTooltip();  // RVA: 0x4EA790
        void .ctor();  // RVA: 0x4AEF40
        bool <TryComputePowerScoreDelta>b__27_0(ItemInstance* it);  // RVA: 0x4EBD60
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct LeaderboardTab
{
public:
    // Static fields
    // static LeaderboardTab Global;
    // static LeaderboardTab Friends;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<TMPro.TMP_Text> <>9__44_0;
    // static System.Comparison<AutoBattle.Steam.LeaderboardEntry> <>9__54_0;


    // Methods
    static void .cctor();  // RVA: 0x502F80
    void .ctor();  // RVA: 0x4BC410
    int32_t <WireSceneAuthored>b__44_0(TMP_Text* a, TMP_Text* b);  // RVA: 0x502E30
    int32_t <FetchFriendsLeaderboard>b__54_0(LeaderboardEntry* a, LeaderboardEntry* b);  // RVA: 0x502E00
};

// Namespace: <global>
class <>c__DisplayClass48_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardEntry[][] topEntries; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    LeaderboardEntry[][] aroundEntries; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t myPosition; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <RefreshCoroutine>b__0(LeaderboardEntry[][] top, LeaderboardEntry[][] around, int32_t pos);  // RVA: 0x502F00
    void <RefreshCoroutine>b__1(LeaderboardEntry[][] entries);  // RVA: 0x502F50
};

// Namespace: <global>
class <>c__DisplayClass52_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <RefreshTabButton>b__0();  // RVA: 0x502F60
};

// Namespace: <global>
class <>c__DisplayClass53_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateTabButton>b__0();  // RVA: 0x502F60
};

// Namespace: <global>
class <>c__DisplayClass54_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> steamToPlayFab; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchFriendsLeaderboard>b__1(System.Collections.Generic.Dictionary<System.String,System.String> m);  // RVA: 0x502F50
};

// Namespace: <global>
class <>c__DisplayClass54_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchFriendsLeaderboard>b__2(bool ok, Il2CppString* resp);  // RVA: 0x502ED0
};

// Namespace: <global>
class <FetchFriendsLeaderboard>d__54
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass54_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass54_1* <>8__2; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<AutoBattle.Steam.LeaderboardEntry[]> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> <result>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <myPlayFabId>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.HashSet<System.String> <friendPlayFabIds>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x5016E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x502640
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <RefreshCoroutine>d__48
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    LeaderboardUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass48_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x502680
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x502DC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class LeaderboardUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static LeaderboardUI* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* overlayRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* contentContainer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* closeButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* titleText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* seasonInfoText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* statusText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Text* rankTierNameText; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Text* rankRPValueText; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* rankStreakText; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        TMP_Text* rankWinText; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        TMP_Text* rankLossText; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Image* tierProgressFill; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Image* rankCardImage; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* rowTemplate; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GameObject* matchRowTemplateW; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GameObject* matchRowTemplateL; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* leaderboardTabBar; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        bool isOpen; // 0x00A8
        bool isFetching; // 0x00A9
        bool sceneWired; // 0x00AA
        uint8_t pad_00AB[0x5]; // 0x00AB
        System.Collections.Generic.List<UnityEngine.GameObject> dynamicRows; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        LeaderboardTab currentTab; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        bool tabVisualsCached; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        Color cachedSelectedBgColor; // 0x00C0
        uint8_t pad_00C1[0xF]; // 0x00C1
        Sprite* cachedSelectedBgSprite; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Color cachedSelectedTextColor; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        FontStyles cachedSelectedFontStyle; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color cachedDeselectedBgColor; // 0x00EC
        uint8_t pad_00ED[0x13]; // 0x00ED
        Sprite* cachedDeselectedBgSprite; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Color cachedDeselectedTextColor; // 0x0108
        uint8_t pad_0109[0xF]; // 0x0109
        FontStyles cachedDeselectedFontStyle; // 0x0118
    
        // Methods
        static LeaderboardUI* get_Instance();  // RVA: 0x4F7120
        void OnDestroy();  // RVA: 0x4F4C90
        bool get_IsOpen();  // RVA: 0x4F72E0
        void Toggle();  // RVA: 0x4F5C20
        void Open();  // RVA: 0x4F4D40
        void PositionMainPanel();  // RVA: 0x4F4E60
        void RefreshStaticTexts();  // RVA: 0x4F52D0
        void Close();  // RVA: 0x4F38F0
        void EnsureBuilt();  // RVA: 0x4F3EC0
        void WireSceneAuthored();  // RVA: 0x4F5E20
        static Transform* FindDescendant(Transform* root, Il2CppString* name);  // RVA: 0x4F40E0
        float GetReferenceSpacerHeight(float fallback);  // RVA: 0x4F41F0
        void Refresh();  // RVA: 0x4F5A40
        IEnumerator* RefreshCoroutine();  // RVA: 0x4F5260
        void SwitchTab(LeaderboardTab tab);  // RVA: 0x4F5BF0
        void BuildTabBar();  // RVA: 0x4F2EE0
        void CacheTabVisualsFromScene(Transform* tabBarRoot);  // RVA: 0x4F34B0
        void RefreshTabButton(Transform* tabBarRoot, Il2CppString* childName, bool selected, Action* onClick);  // RVA: 0x4F5680
        void CreateTabButton(Transform* parent, Il2CppString* label, bool selected, Action* onClick);  // RVA: 0x4F3980
        IEnumerator* FetchFriendsLeaderboard(System.Action<AutoBattle.Steam.LeaderboardEntry[]> callback);  // RVA: 0x4F4070
        void BuildPanel();  // RVA: 0x4F0330
        void BuildRankHeader();  // RVA: 0x4F1B50
        void BuildLeaderboardContent(LeaderboardEntry[][] topEntries, LeaderboardEntry[][] aroundEntries, int32_t myPosition);  // RVA: 0x4EF650
        void BuildPvPMatchHistory();  // RVA: 0x4F1600
        void AddMatchRow(PvPMatchRecord* match);  // RVA: 0x4EE740
        void AddLeaderboardRow(int32_t rank, Il2CppString* playerName, int32_t rp, bool isMe);  // RVA: 0x4EDC40
        static void SetChildText(Transform* parent, Il2CppString* childName, Il2CppString* text, Color color);  // RVA: 0x4F5AD0
        void AddColumnHeader();  // RVA: 0x4ED8A0
        void AddSectionLabel(Il2CppString* text);  // RVA: 0x4EF3E0
        void AddSpacer(float height);  // RVA: 0x4EF560
        GameObject* MakeAnchoredText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions textAlign, bool leftAnchor, float offsetX, float width, float height);  // RVA: 0x4F4400
        GameObject* MakeText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x4F4A50
        GameObject* MakeChildText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x4F46C0
        void .ctor();  // RVA: 0x4F70A0
        void <BuildTabBar>b__50_0();  // RVA: 0x4F5DC0
        void <BuildTabBar>b__50_1();  // RVA: 0x4F5DF0
        void <BuildTabBar>b__50_2();  // RVA: 0x4F5DC0
        void <BuildTabBar>b__50_3();  // RVA: 0x4F5DF0
    };

    // Namespace: AutoBattle.UI
    class LocalizeText : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* localizationKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool disableAtRuntime; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* tmpText; // 0x0030
    
        // Methods
        Il2CppString* get_LocalizationKey();  // RVA: 0x4F7650
        void set_LocalizationKey(Il2CppString* value);  // RVA: 0x4F7660
        void Awake();  // RVA: 0x4F72F0
        void OnEnable();  // RVA: 0x4F7450
        void OnDisable();  // RVA: 0x4F7340
        void RefreshText();  // RVA: 0x4F7570
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.UI
    class NotificationUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* messageText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float displayDuration; // 0x0028
    
        // Methods
        void Initialize(Il2CppString* message, NotificationType type);  // RVA: 0x4F7690
        void .ctor();  // RVA: 0x4F7820
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class ChallengeLogResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class ChallengeLogResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class ChallengeLogDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogRecord* PvPChallengeLog; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class ChallengeLogRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class <>c__DisplayClass13_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool clearOk; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchAndShowRealResults>b__0(bool ok, Il2CppString* r);  // RVA: 0x502ED0
    void <FetchAndShowRealResults>b__1(bool ok);  // RVA: 0x502EF0
};

// Namespace: <global>
class <FetchAndShowRealResults>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass13_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OfflinePvPSummaryUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> <results>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t <totalXP>5__3; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t <wins>5__4; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t <losses>5__5; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t <totalRP>5__6; // 0x0044

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x500AB0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5016A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class OfflinePvPSummaryUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t OFFLINE_PVP_XP_WIN;
        // static int32_t OFFLINE_PVP_XP_LOSE;
        // static Il2CppString* PREF_LAST_SESSION;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* summaryPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* contentContainer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* subtitleText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* summaryLineText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* closeButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* titleText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* resultEntryTemplate; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<UnityEngine.GameObject> dynamicEntries; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool hasChecked; // 0x0060
        bool sceneContentWired; // 0x0061
    
        // Methods
        void CheckOfflinePvP();  // RVA: 0x4F78B0
        IEnumerator* FetchAndShowRealResults();  // RVA: 0x4F8700
        void SaveSessionTimestamp();  // RVA: 0x4FB320
        static void SaveLastSessionTime();  // RVA: 0x4FB290
        void ShowSummaryPanel(System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> results, int32_t totalXP, int32_t totalRP, int32_t wins, int32_t losses);  // RVA: 0x4FB3B0
        void WireSceneAuthoredContent(Transform* innerPanel);  // RVA: 0x4FB680
        static Transform* FindDescendant(Transform* root, Il2CppString* name);  // RVA: 0x4F8810
        static TMP_Text* FindDescendantTMP(Transform* root, Il2CppString* name);  // RVA: 0x4F8770
        void EnsureSummaryPanel();  // RVA: 0x4F7F10
        void PopulateInnerContent(Transform* innerPanel, System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> results, int32_t totalXP, int32_t totalRP, int32_t wins, int32_t losses);  // RVA: 0x4F8920
        void CreateText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions alignment, Vector2 pos, Vector2 size);  // RVA: 0x4F7CD0
        void CloseSummary();  // RVA: 0x4F79F0
        void .ctor();  // RVA: 0x4FB9F0
    };

    // Namespace: AutoBattle.UI
    class OfflineChallengeLog
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.UI.OfflineChallenge> challenges; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4F7830
    };

    // Namespace: AutoBattle.UI
    class OfflineChallenge
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* challengerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t challengerLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t challengerPowerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool challengerWon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t timestampTicks; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int64_t timestamp; // 0x0030
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.UI
    class OfflinePvPResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* challengerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t challengerLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t challengerPowerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool won; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t timestampTicks; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.UI
    class OutskirtsBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* skySprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* cloudsSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* mountainsSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* grassSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite* statueSprite; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] animalFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float pixelScale; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        bool applyPixelScaleToStaticLayers; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float animalFrameRate; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float animalWalkSpeed; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float animalBaseY; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float animalRespawnMin; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float animalRespawnMax; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float animalYJitter; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool animalWalksRight; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float cloudScrollSpeed; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        Color cloudTint; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        float cloudYOffset; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float mountainsYOffset; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float statueXOffset; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float statueYOffset; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        RectTransform* skyLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* cloudContainerRT; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* cloudART; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* cloudBRT; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        RectTransform* mountainsLayer; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RectTransform* animalLayer; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        RectTransform* statueLayer; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        RectTransform* grassLayer; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        RectTransform* rect; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Image* animalImage; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        int32_t animalFrame; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float animalTimer; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float animalX; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float animalCurrentBaseY; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float animalRespawnTimer; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool animalActive; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float animalHalfWidth; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float cloudTileWidth; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        bool built; // 0x0108
    
        // Methods
        void Awake();  // RVA: 0x4FBA70
        void OnEnable();  // RVA: 0x4FCB40
        void OnDisable();  // RVA: 0x4FCA80
        void Build();  // RVA: 0x4FBAD0
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4FC8A0
        RectTransform* CreateCloudTile(Il2CppString* name, Transform* parent, Vector2 size, float xOffset);  // RVA: 0x4FC720
        void Update();  // RVA: 0x4FCCA0
        void SetSprites(Sprite* sky, Sprite* clouds, Sprite* mountains, Sprite* grass, Sprite* statue, Sprite[][] animal);  // RVA: 0x4FCC10
        void .ctor();  // RVA: 0x4FD220
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float cursorY; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <ShowTooltip>b__0(Transform* section);  // RVA: 0x516500
};

// Namespace: <global>
class <>c__DisplayClass15_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ShowTooltip>b__1(ItemData* t);  // RVA: 0x4BC3E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class PlayerBattleTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* tooltipPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool isVisible; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* cachedInfoValues; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* cachedStatValues; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* lastInfoValuesText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* lastStatValuesText; // 0x0048
    
        // Methods
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4FE5C0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4FE5B0
        void OnDisable();  // RVA: 0x4FE5B0
        void Hide();  // RVA: 0x4FE5B0
        void Update();  // RVA: 0x5009D0
        void ShowTooltip();  // RVA: 0x4FEF60
        static void DisableTooltipRaycast(GameObject* panel);  // RVA: 0x4FDD50
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x4FD290
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x4FE690
        void HideTooltip();  // RVA: 0x4FE420
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x4FDF10
        Il2CppString* BuildInfoValuesText(PlayerState* ps, int32_t powerScore);  // RVA: 0x4FD480
        Il2CppString* BuildStatValuesText(PlayerStats baseStats, PlayerState* ps);  // RVA: 0x4FD720
        static Il2CppString* ColorizeStatValue(Il2CppString* display, float eff, float baseVal);  // RVA: 0x4FDCA0
        static CombatRuntimeEffects* ResolveActiveRuntimeEffects();  // RVA: 0x4FEED0
        void RefreshDynamicSections();  // RVA: 0x4FECA0
        Il2CppString* GetRarityColor(Il2CppString* rarity);  // RVA: 0x4FE2C0
        Il2CppString* GetCategoryIcon(Il2CppString* category);  // RVA: 0x4FE160
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.UI
    class PrivacyConsentPopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* DEFAULT_TITLE;
        // static Il2CppString* DEFAULT_BODY;
        // static PrivacyConsentPopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
        // static GameObject* _activeRuntimePopup;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* titleText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* bodyText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Button* gotItButton; // 0x0038
    
        // Methods
        static PrivacyConsentPopup* get_SceneInstance();  // RVA: 0x5049C0
        void OnDestroy();  // RVA: 0x504120
        static void TryShow();  // RVA: 0x5045D0
        void ShowSceneAuthored();  // RVA: 0x5043A0
        void OnDismiss();  // RVA: 0x504250
        void BuildRuntime(Canvas* rootCanvas);  // RVA: 0x503030
        static Button* CreateRuntimeButton(Transform* parent, Il2CppString* label, TMP_FontAsset* font, Color tint, Vector2 anchoredPos);  // RVA: 0x503B80
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.UI
    class PulseScale : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float baseScale; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float pulseAmount; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float pulseSpeed; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool startAtPeak; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float timer; // 0x0030
    
        // Methods
        void OnEnable();  // RVA: 0x504BF0
        void Update();  // RVA: 0x504C20
        void OnDisable();  // RVA: 0x504BA0
        void .ctor();  // RVA: 0x504CB0
    };

    // Namespace: AutoBattle.UI
    class PvEEnemyTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        EnemyState* enemy; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* tooltipPanel; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isVisible; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        Color nameColorVerde; // 0x0034
        uint8_t pad_0035[0xF]; // 0x0035
        Color nameColorGiallo; // 0x0044
        uint8_t pad_0045[0xF]; // 0x0045
        Color nameColorViola; // 0x0054
    
        // Methods
        void SetNameColors(Color verde, Color giallo, Color viola);  // RVA: 0x5063D0
        void SetEnemy(EnemyState* pveEnemy);  // RVA: 0x4ADCC0
        void ClearEnemy();  // RVA: 0x505A10
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x505DB0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x505DA0
        void OnDisable();  // RVA: 0x505DA0
        void ShowTooltip();  // RVA: 0x5063F0
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x505A40
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x5055B0
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x505DC0
        void HideTooltip();  // RVA: 0x505C10
        void BuildContentSplit(TMP_Text* labels, TMP_Text* values);  // RVA: 0x504CD0
        Il2CppString* BuildContent();  // RVA: 0x5051A0
        Il2CppString* GetColorHex(EnemyColor color);  // RVA: 0x505B90
        void .ctor();  // RVA: 0x506E70
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float cursorY; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <ShowTooltip>b__0(Transform* section);  // RVA: 0x516980
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class PvPEnemyTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        PlayerSnapshot* snapshot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t opponentRP; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* tooltipPanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isVisible; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* cachedStatValuesB; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* lastStatValuesText; // 0x0048
    
        // Methods
        void SetSnapshot(PlayerSnapshot* pvpSnapshot, int32_t rankingPoints);  // RVA: 0x5085E0
        void ClearSnapshot();  // RVA: 0x507650
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x507FC0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x507FB0
        void OnDisable();  // RVA: 0x507FB0
        void ShowTooltip();  // RVA: 0x508610
        static void DisableTooltipRaycast(GameObject* panel);  // RVA: 0x507730
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x506E90
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x507FD0
        void HideTooltip();  // RVA: 0x507E00
        void Update();  // RVA: 0x50A660
        Il2CppString* BuildEnemyStatValuesText();  // RVA: 0x507080
        static Il2CppString* ColorizeStatValue(Il2CppString* display, float eff, float baseVal);  // RVA: 0x507680
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x5078F0
        Il2CppString* GetRarityColor(Il2CppString* rarity);  // RVA: 0x507CA0
        Il2CppString* GetCategoryIcon(Il2CppString* category);  // RVA: 0x507B40
        void .ctor();  // RVA: 0x50A730
    };

    // Namespace: AutoBattle.UI
    class RestBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] bgFrames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* backgroundSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] fireFrames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] humanFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite[][] fireLightFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] particleFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float bgFrameRate; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float fireFrameRate; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float humanFrameRate; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float fireLightFrameRate; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float particleFrameRate; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool useGenderTwoPose; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Sprite* humanMaleRestUp; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* humanMaleRestDown; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* humanFemaleRestUp; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite* humanFemaleRestDown; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Sprite* humanChar3RestUp; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite* humanChar3RestDown; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Sprite* humanChar4RestUp; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Sprite* humanChar4RestDown; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Sprite* humanChar5RestUp; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Sprite* humanChar5RestDown; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite* humanChar6RestUp; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite* humanChar6RestDown; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float humanRestUpDuration; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float humanRestDownDuration; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        Vector2 firePosition; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Vector2 humanPosition; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Vector2 fireSize; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Vector2 humanSize; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* fireLightAdditiveMaterial; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        RectTransform* bgLayer; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        RectTransform* fireLayer; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RectTransform* humanLayer; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        RectTransform* fireLightLayer; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        RectTransform* particleLayer; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        RectTransform* rect; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Image* bgImage; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        int32_t bgFrameIdx; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        float bgTimer; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        Image* humanImage; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        int32_t humanFrameIdx; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        float humanTimer; // 0x0144
        uint8_t pad_0145[0x3]; // 0x0145
        Image* fireLightImage; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        int32_t fireLightFrameIdx; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float fireLightTimer; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        Image* particleImage; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        int32_t particleFrameIdx; // 0x0160
        uint8_t pad_0161[0x3]; // 0x0161
        float particleTimer; // 0x0164
        uint8_t pad_0165[0x3]; // 0x0165
        Sprite[][] activeRestPair; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        int32_t twoPoseIdx; // 0x0170
        uint8_t pad_0171[0x3]; // 0x0171
        float twoPoseTimer; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        bool built; // 0x0178
    
        // Methods
        void Awake();  // RVA: 0x50A740
        void OnEnable();  // RVA: 0x50B5F0
        void Build();  // RVA: 0x50A7A0
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, Vector2 anchoredPos, bool raycast, bool fullFrame);  // RVA: 0x50B2E0
        void Update();  // RVA: 0x50B9E0
        void SetSprites(Sprite* background, Sprite[][] fire, Sprite[][] human);  // RVA: 0x50B9A0
        void ResolveActiveRestPair();  // RVA: 0x50B650
        void RefreshGenderTwoPose();  // RVA: 0x50B640
        void .ctor();  // RVA: 0x50BEE0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<System.Int32> <>9__8_1;
    // static System.Action<System.Boolean> <>9__8_2;
    // static System.Action<System.Boolean> <>9__8_3;
    // static System.Action<System.Single> <>9__8_4;
    // static System.Action<System.Single> <>9__8_5;
    // static System.Action<System.Boolean> <>9__8_8;
    // static System.Action<System.Boolean> <>9__8_9;
    // static System.Action<System.Int32> <>9__8_10;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__16_4;
    // static System.Action<System.Single> <>9__16_5;
    // static System.Action<System.Single> <>9__16_6;


    // Methods
    static void .cctor();  // RVA: 0x518760
    void .ctor();  // RVA: 0x4BC410
    void <BuildSettingsPanel>b__8_1(int32_t index);  // RVA: 0x515E80
    void <BuildSettingsPanel>b__8_2(bool on);  // RVA: 0x515FD0
    void <BuildSettingsPanel>b__8_3(bool on);  // RVA: 0x516020
    void <BuildSettingsPanel>b__8_4(float val);  // RVA: 0x516170
    void <BuildSettingsPanel>b__8_5(float val);  // RVA: 0x516240
    void <BuildSettingsPanel>b__8_8(bool on);  // RVA: 0x516310
    void <BuildSettingsPanel>b__8_9(bool on);  // RVA: 0x516320
    void <BuildSettingsPanel>b__8_10(int32_t idx);  // RVA: 0x515DB0
    void <WireSceneAuthoredPanel>b__16_4(bool on);  // RVA: 0x516320
    void <WireSceneAuthoredPanel>b__16_5(float v);  // RVA: 0x516360
    void <WireSceneAuthoredPanel>b__16_6(float v);  // RVA: 0x516430
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* languageText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* windowSizeText; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* vSyncToggleText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TMP_Text* alwaysOnTopToggleText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Action* onClose; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <WireSceneAuthoredPanel>b__0();  // RVA: 0x516E00
    void <WireSceneAuthoredPanel>b__1();  // RVA: 0x5172C0
    void <WireSceneAuthoredPanel>b__2();  // RVA: 0x517570
    void <WireSceneAuthoredPanel>b__3();  // RVA: 0x517830
    void <WireSceneAuthoredPanel>b__9(bool on);  // RVA: 0x517DC0
    void <WireSceneAuthoredPanel>b__10(bool on);  // RVA: 0x5170B0
    void <WireSceneAuthoredPanel>b__7();  // RVA: 0x517AF0
    void <WireSceneAuthoredPanel>b__8();  // RVA: 0x517B10
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    String[][] opts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t sel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <RewireGameSpeedDropdownListeners>b__0();  // RVA: 0x517EF0
    void <RewireGameSpeedDropdownListeners>b__1();  // RVA: 0x518020
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Transform* existing; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameObject* container; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <EnsureAnalyticsToggle>b__1(bool on);  // RVA: 0x5181E0
    void <EnsureAnalyticsToggle>b__0(bool on);  // RVA: 0x518160
};

// Namespace: <global>
class <>c__DisplayClass26_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    String[][] opts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t sel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <RewireSectorDebugDropdownListeners>b__0();  // RVA: 0x518250
    void <RewireSectorDebugDropdownListeners>b__1();  // RVA: 0x5183C0
};

// Namespace: <global>
class <>c__DisplayClass28_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* valueText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Single> onChanged; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <BindVolumeSlider>b__0(float val);  // RVA: 0x518540
};

// Namespace: <global>
class <>c__DisplayClass30_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t sel; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    String[][] opts; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Int32> onChanged; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateDropdown>b__0();  // RVA: 0x518640
    void <CreateDropdown>b__1();  // RVA: 0x5186D0
};

// Namespace: <global>
class <>c__DisplayClass32_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* textRef; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Image* bgRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> onChanged; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateToggle>b__0();  // RVA: 0x52A1B0
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* valRef; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Single> onChanged; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateVolumeSlider>b__0(float val);  // RVA: 0x52A320
};

// Namespace: <global>
class <>c__DisplayClass34_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateActionButton>b__0();  // RVA: 0x502F60
};

// Namespace: <global>
class <>c__DisplayClass35_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateCloseButton>b__0();  // RVA: 0x502F60
};

// Namespace: <global>
class <>c__DisplayClass8_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.Int32> availableLangs; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* onClose; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <BuildSettingsPanel>b__0(int32_t pos);  // RVA: 0x52A600
    void <BuildSettingsPanel>b__11();  // RVA: 0x52A730
    void <BuildSettingsPanel>b__6();  // RVA: 0x52A9E0
    void <BuildSettingsPanel>b__7();  // RVA: 0x52AA80
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SettingsHelper
    {
    public:
        // Static fields
        // static String[][] LanguageNames;
        // static Il2CppString* PREF_LANGUAGE;
        // static Il2CppString* PREF_FPS_CAP;
        // static Il2CppString* PREF_VSYNC;
        // static Il2CppString* PREF_ALWAYS_ON_TOP;
        // static Il2CppString* PREF_WINDOW_SIZE;
        // static int32_t DEFAULT_WINDOW_SIZE;
        // static int32_t _langIndex;
        // static int32_t _winSizeIndex;
        // static int32_t _fpsIndex;
        // static String[][] WindowSizeLabels;
        // static String[][] FpsLabels;
        // static Int32[][] FpsValues;
        // static Int32[][] GameSpeedValues;
    
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x514440
        static GameObject* BuildSettingsPanel(Canvas* rootCanvas, Action* onClose);  // RVA: 0x50CB80
        static void ApplyPersistedSettings();  // RVA: 0x50C300
        static void WireSceneAuthoredPanel(Button* languageLeftButton, Button* languageRightButton, TMP_Text* languageText, Button* windowSizeLeftButton, Button* windowSizeRightButton, TMP_Text* windowSizeText, Button* framerateLeftButton, Button* framerateRightButton, TMP_Text* framerateText, Toggle* vSyncToggle, TMP_Text* vSyncToggleText, Toggle* alwaysOnTopToggle, TMP_Text* alwaysOnTopToggleText, Toggle* fastPvPToggle, Slider* musicVolumeSlider, Slider* sfxVolumeSlider, TMP_Text* musicVolumeValueText, TMP_Text* sfxVolumeValueText, Button* closeButton, Button* debugAddItemsButton, Action* onClose);  // RVA: 0x5145D0
        static void RefreshSceneAuthoredPanelValues(TMP_Text* languageText, TMP_Text* windowSizeText, TMP_Text* framerateText, Toggle* vSyncToggle, TMP_Text* vSyncToggleText, Toggle* alwaysOnTopToggle, TMP_Text* alwaysOnTopToggleText, Toggle* fastPvPToggle, Slider* musicVolumeSlider, Slider* sfxVolumeSlider, TMP_Text* musicVolumeValueText, TMP_Text* sfxVolumeValueText);  // RVA: 0x513380
        static void EnsureSectorDebugDropdown(RectTransform* innerSettings);  // RVA: 0x512CD0
        static void EnsureGameSpeedDropdown(RectTransform* innerSettings);  // RVA: 0x512490
        static void RewireGameSpeedDropdownListeners(Transform* container, String[][] options, int32_t initialIdx);  // RVA: 0x513E60
        static void EnsureAnalyticsToggle(RectTransform* innerSettings);  // RVA: 0x511AC0
        static void UpdateAnalyticsToggleText(Transform* analyticsToggleRoot, bool isOn);  // RVA: 0x5144A0
        static void ApplyDebugVisibilityToScenePanel(RectTransform* innerSettings, Toggle* fastPvPToggle, Button* debugAddItemsButton);  // RVA: 0x50BFE0
        static void RemoveLegacyDebugResetButtons(RectTransform* innerSettings);  // RVA: 0x513CF0
        static void RewireSectorDebugDropdownListeners(Transform* container, String[][] options, int32_t initialIdx);  // RVA: 0x514150
        static String[][] BuildSectorOptions();  // RVA: 0x50C850
        static void BindVolumeSlider(Slider* slider, TMP_Text* valueText, float initialValue, System.Action<System.Single> onChanged);  // RVA: 0x50C610
        static void CreateSectionTitle(Transform* parent, Il2CppString* title, float yOffset);  // RVA: 0x50FF60
        static void CreateDropdown(Transform* parent, String[][] options, int32_t currentIndex, float yOffset, System.Action<System.Int32> onChanged);  // RVA: 0x50F980
        static GameObject* CreateArrowButton(Transform* parent, Il2CppString* arrow, Vector2 pos, bool isLeft);  // RVA: 0x50EF50
        static void CreateToggle(Transform* parent, Il2CppString* label, bool initialValue, float yOffset, System.Action<System.Boolean> onChanged);  // RVA: 0x510280
        static void CreateVolumeSlider(Transform* parent, Il2CppString* label, float yOffset, float initialValue, System.Action<System.Single> onChanged);  // RVA: 0x510B70
        static void CreateActionButton(Transform* parent, Il2CppString* label, float yOffset, Color bgColor, Action* onClick);  // RVA: 0x50EA50
        static void CreateCloseButton(Transform* parent, float yOffset, Action* onClick);  // RVA: 0x50F430
        static TMP_Text* CreateText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x510040
        static void .cctor();  // RVA: 0x515880
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__53_0;


    // Methods
    static void .cctor();  // RVA: 0x52AAA0
    void .ctor();  // RVA: 0x4BC410
    void <Start>b__53_0(bool on);  // RVA: 0x529FB0
};

// Namespace: <global>
class <>c__DisplayClass55_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* locKey; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    Il2CppString* <AttachActionTooltip>b__0();  // RVA: 0x52A4A0
};

// Namespace: <global>
class <>c__DisplayClass81_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> friendSnapshots; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchAndPopulateFriends>b__0(System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> result);  // RVA: 0x502F50
};

// Namespace: <global>
class <>c__DisplayClass82_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SharedSettingsBarUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    PlayerSnapshot* capturedSnapshot; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CreateFriendRow>b__1();  // RVA: 0x52A500
};

// Namespace: <global>
class <>c__DisplayClass82_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerSnapshot* captured; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    Il2CppString* <CreateFriendRow>b__0();  // RVA: 0x52A530
};

// Namespace: <global>
class <FetchAndPopulateFriends>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SharedSettingsBarUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass81_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_Text* <statusText>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Transform* <contentTransform>5__3; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x529080
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529A60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SharedSettingsBarUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static bool <DebugVisible>k__BackingField;
        // static Action* OnDebugVisibilityChanged;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Button* settingsToggleButton; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* settingsOpenSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* settingsClosedSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* settingsBar; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* settingsQuitButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* surveyPopUp; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Il2CppString* surveyUrl; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Button* surveyYesButton; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Button* surveyNoButton; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* settingsOptionsButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Button* settingsStatsButton; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Button* settingsScaleButton; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Toggle* audioToggle; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* resetConfirmPanelRoot; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        TMP_Text* resetConfirmQuestionText; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Button* resetConfirmYesButton; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Button* resetConfirmNoButton; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* settingsPanelRoot; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Button* languageLeftButton; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Button* languageRightButton; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        TMP_Text* languageText; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Button* windowSizeLeftButton; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Button* windowSizeRightButton; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        TMP_Text* windowSizeText; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Button* framerateLeftButton; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Button* framerateRightButton; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        TMP_Text* framerateText; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Toggle* vSyncToggle; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        TMP_Text* vSyncToggleText; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Toggle* alwaysOnTopToggle; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        TMP_Text* alwaysOnTopToggleText; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Toggle* fastPvPToggle; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        Slider* musicVolumeSlider; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Slider* sfxVolumeSlider; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        TMP_Text* musicVolumeValueText; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        TMP_Text* sfxVolumeValueText; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Button* settingsCloseButton; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Button* debugAddItemsButton; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        Button* challengeFriendButton; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        GameObject* settingsPanel; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        GameObject* resetConfirmPanel; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        bool settingsControlsBound; // 0x0168
        bool settingsBarOpen; // 0x0169
        uint8_t pad_016A[0x6]; // 0x016A
        LeaderboardUI* leaderboardUI; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Vector2 defaultBarPos; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector2 defaultBtnPos; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        GameObject* friendListPanel; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        GameObject* friendRowTemplate; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Coroutine* friendFetchCoroutine; // 0x0198
    
        // Methods
        static bool get_DebugVisible();  // RVA: 0x51D170
        static void set_DebugVisible(bool value);  // RVA: 0x51D270
        static void add_OnDebugVisibilityChanged(Action* value);  // RVA: 0x51D0B0
        static void remove_OnDebugVisibilityChanged(Action* value);  // RVA: 0x51D1B0
        void Start();  // RVA: 0x51BB90
        void Update();  // RVA: 0x51CD40
        static void AttachActionTooltip(Button* btn, Il2CppString* locKey);  // RVA: 0x5188C0
        void UpdateButtonsForScreen(GameScreen screen);  // RVA: 0x51CA10
        void OnDestroy();  // RVA: 0x51B010
        void ToggleSettingsBar();  // RVA: 0x51C3B0
        void UpdateToggleIcon();  // RVA: 0x51CC60
        void ToggleSettingsPanel();  // RVA: 0x51C530
        void DismissSettingsPanel();  // RVA: 0x51AB00
        void BindSettingsPanelControls();  // RVA: 0x518A60
        void CollapseSettingsBar();  // RVA: 0x519DD0
        void OnQuitClicked();  // RVA: 0x51B1C0
        void OnSurveyYes();  // RVA: 0x51B6F0
        void OnSurveyNo();  // RVA: 0x51B6B0
        static void QuitApp();  // RVA: 0x51B6B0
        void OnLeaderboardClicked();  // RVA: 0x51B0E0
        void CloseBar();  // RVA: 0x519D30
        void DismissResetConfirmPopup();  // RVA: 0x51A9D0
        void OnResetCharacterClicked();  // RVA: 0x51B300
        GameObject* BuildResetConfirmPopup();  // RVA: 0x519050
        static Button* CreatePopupButton(Transform* parent, Il2CppString* label, TMP_FontAsset* font, Color tint, Vector2 anchoredPos);  // RVA: 0x51A390
        void EnsureResetCharacterButtonInSettings();  // RVA: 0x51AC30
        void OpenFriendListPanel();  // RVA: 0x51B780
        void DismissFriendListPanel();  // RVA: 0x51A910
        void ClearFriendListContent();  // RVA: 0x519AB0
        IEnumerator* FetchAndPopulateFriends();  // RVA: 0x51AD50
        void CreateFriendRow(Transform* parent, Il2CppString* friendName, PlayerSnapshot* snapshot, TMP_FontAsset* font);  // RVA: 0x519E60
        void OnChallengeFriendClicked(PlayerSnapshot* friendSnapshot);  // RVA: 0x51ADC0
        void .ctor();  // RVA: 0x51D030
        Il2CppString* <Start>b__53_1();  // RVA: 0x51C940
        void <OnResetCharacterClicked>b__71_0();  // RVA: 0x51C870
        void <BuildResetConfirmPopup>b__72_0();  // RVA: 0x51C780
        void <EnsureResetCharacterButtonInSettings>b__77_0();  // RVA: 0x51C850
    };

    // Namespace: AutoBattle.UI
    class SidePanelController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float panelWidthCanvas; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float verticalOverflowPx; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        CanvasScaler* canvasScaler; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool useVerticalAlignment; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float panelHeightCanvas; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Image* backgroundImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        RectTransform* innerPanelTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        float innerPanelTopY; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float innerPanelBottomY; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        RectTransform* rectTransform; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool isOpen; // 0x0058
    
        // Methods
        bool get_IsOpen();  // RVA: 0x51E020
        void Awake();  // RVA: 0x51D360
        void Toggle();  // RVA: 0x51DFA0
        void Open();  // RVA: 0x51DD10
        void Open(bool forceRight);  // RVA: 0x51DBD0
        void Close();  // RVA: 0x51DB90
        void ChooseSide();  // RVA: 0x51D3D0
        Il2CppString* ChooseVerticalAlignment(Vector3[][] corners);  // RVA: 0x51D5D0
        void ApplyInnerPanelOffset(bool isTop);  // RVA: 0x51D2B0
        void SetLeftSide();  // RVA: 0x51DD60
        void SetRightSide();  // RVA: 0x51DE80
        void .ctor();  // RVA: 0x51E000
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimateIcon>d__26
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float fps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SlotButtonUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <frameIndex>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <delay>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x528CE0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x528E50
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <AnimateSynergyFrame>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SlotButtonUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x528E90
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529040
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SlotButtonUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* equippedBG; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* icon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* rarityFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* elementDot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* slotLabel; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite* elementFire; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* elementIce; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* elementHoly; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* elementArcane; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* elementShadow; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* rarityFrameSprite; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* equippedFrameSprite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite[][] synergyFrameSprites; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        float synergyFrameFps; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite[][] iconAnimFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Coroutine* iconAnimCoroutine; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Coroutine* synergyAnimCoroutine; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* selectionFrame; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        GameObject* newBadge; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        GameObject* unequipGO; // 0x00B8
    
        // Methods
        Button* get_UnequipButton();  // RVA: 0x51EB90
        void SetSlotSelected(bool selected);  // RVA: 0x51E270
        void Setup(Il2CppString* slotDisplayName, ItemData* itemData, ItemInstance* itemInstance, bool hasNewForSlot, bool hasSynergy, Color synergyColor);  // RVA: 0x51E300
        void RefreshNewBadge(bool shouldShow);  // RVA: 0x51E1E0
        Sprite* GetElementSprite(ElementCategory category);  // RVA: 0x51E120
        IEnumerator* AnimateIcon(float fps);  // RVA: 0x51E030
        IEnumerator* AnimateSynergyFrame();  // RVA: 0x51E0B0
        void OnDisable();  // RVA: 0x51E160
        void .ctor();  // RVA: 0x51EB70
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct Attack2Mode
{
public:
    // Static fields
    // static Attack2Mode Standard;
    // static Attack2Mode RightAbove;
    // static Attack2Mode RandomBoth;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <LungeOnlyCoroutine>d__146
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpriteAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float holdDuration; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x529AA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529B90
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SpriteAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float frameRate; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t currentFrame; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float timer; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool isPlaying; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Sprite[][] idleFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] attackFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite[][] attack2Frames; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite[][] attack3Frames; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool isAttacking; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t attackFrame; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float attackTimer; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float attackFrameRate; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool attackAnimationsEnabled; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite[][] hitFrames; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        bool isHit; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t hitFrame; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float hitTimer; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float hitFrameRate; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        Sprite[][] deathFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool isDying; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        int32_t deathFrame; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float deathTimer; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float deathFrameRate; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        Image* slashImage; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Sprite[][] slashFrames; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite[][] slashSottoFrames; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite[][] slashSopraFrames; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Sprite[][] slashAttack3Frames; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Sprite[][] slashRightAboveFrames; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Sprite[][] slashMagicFrames; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        int32_t slashFrame; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        bool slashPlaying; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        float slashTimer; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float slashFrameRate; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        bool queueSlashSopra; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        int32_t currentAttackVariant; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        int32_t slashStartFrame; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool slashWaitingForFrame; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float slashStartDelay; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float slashDelayTimer; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        bool slashDelayActive; // 0x0108
        bool keepWeaponVisibleDuringAttack; // 0x0109
        uint8_t pad_010A[0x2]; // 0x010A
        int32_t weaponReappearFrame; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        int32_t weaponReappearFrameAtk3; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        Vector2 slashSottoPos; // 0x0114
        uint8_t pad_0115[0x7]; // 0x0115
        Vector2 slashSopraPos; // 0x011C
        uint8_t pad_011D[0x7]; // 0x011D
        bool hasSlashPositions; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        Attack2Mode currentAttack2Mode; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        bool atk2UseRightAbove; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        Vector2 slashRightAbovePos; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        Vector2 slashRangedPos; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        float slashRangedScale; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        Color slashStandardColor; // 0x0144
        uint8_t pad_0145[0xF]; // 0x0145
        Color slashRightAboveColor; // 0x0154
        uint8_t pad_0155[0xF]; // 0x0155
        Vector2 slashAttack3Pos; // 0x0164
        uint8_t pad_0165[0x7]; // 0x0165
        Vector2 slashAttack3SizeOverride; // 0x016C
        uint8_t pad_016D[0x7]; // 0x016D
        int32_t slashStartFrameAtk3; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        Transform* slashAttack3UpperSibling; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector2 slashDefaultSize; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        bool hasSlashDefaultSize; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        Vector2 idleRectSize; // 0x018C
        uint8_t pad_018D[0x7]; // 0x018D
        Vector2 idleAnchoredPos; // 0x0194
        uint8_t pad_0195[0x7]; // 0x0195
        bool hasIdleRectSize; // 0x019C
        uint8_t pad_019D[0x3]; // 0x019D
        float idleSpriteHeight; // 0x01A0
        uint8_t pad_01A1[0x3]; // 0x01A1
        float idleBottomMarginPx; // 0x01A4
        uint8_t pad_01A5[0x3]; // 0x01A5
        float attackBottomMarginPx; // 0x01A8
        uint8_t pad_01A9[0x3]; // 0x01A9
        float idleContentCenterXPx; // 0x01AC
        uint8_t pad_01AD[0x3]; // 0x01AD
        float attackContentCenterXPx; // 0x01B0
        uint8_t pad_01B1[0x3]; // 0x01B1
        float idleFrameWidth; // 0x01B4
        uint8_t pad_01B5[0x3]; // 0x01B5
        float attackFrameWidth; // 0x01B8
        uint8_t pad_01B9[0x3]; // 0x01B9
        bool mirrorXCompensation; // 0x01BC
        uint8_t pad_01BD[0x3]; // 0x01BD
        Transform* lungeTarget; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        float lungeDistancePx; // 0x01C8
        uint8_t pad_01C9[0x3]; // 0x01C9
        int32_t lungeStartFrameAtk3; // 0x01CC
        uint8_t pad_01CD[0x3]; // 0x01CD
        int32_t lungeEndFrameAtk3; // 0x01D0
        uint8_t pad_01D1[0x3]; // 0x01D1
        int32_t lungeStartFrameAtk2; // 0x01D4
        uint8_t pad_01D5[0x3]; // 0x01D5
        int32_t lungeEndFrameAtk2; // 0x01D8
        uint8_t pad_01D9[0x3]; // 0x01D9
        bool lungeActive; // 0x01DC
        uint8_t pad_01DD[0x3]; // 0x01DD
        Vector2 lungeOriginalPos; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool suppressLungeThisAttack; // 0x01E8
        bool rangedAttackThisTurn; // 0x01E9
        uint8_t pad_01EA[0x6]; // 0x01EA
        Coroutine* lungeOnlyCoroutine; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        EquipOverlayController* overlayController; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Action* OnAttackComplete; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        Action* OnHitComplete; // 0x0208
        uint8_t pad_0209[0x7]; // 0x0209
        Action* OnDeathComplete; // 0x0210
        uint8_t pad_0211[0x7]; // 0x0211
        bool useNativeSize; // 0x0218
    
        // Methods
        int32_t get_CurrentAttackVariant();  // RVA: 0x522B20
        void add_OnAttackComplete(Action* value);  // RVA: 0x522910
        void remove_OnAttackComplete(Action* value);  // RVA: 0x522BB0
        void add_OnHitComplete(Action* value);  // RVA: 0x522A70
        void remove_OnHitComplete(Action* value);  // RVA: 0x522D10
        void add_OnDeathComplete(Action* value);  // RVA: 0x5229C0
        void remove_OnDeathComplete(Action* value);  // RVA: 0x522C60
        int32_t get_CurrentFrame();  // RVA: 0x522B30
        int32_t get_FrameCount();  // RVA: 0x522B60
        bool get_IsAttacking();  // RVA: 0x522B80
        bool get_IsHit();  // RVA: 0x522BA0
        bool get_IsDying();  // RVA: 0x522B90
        void SetFrames(Sprite[][] newFrames);  // RVA: 0x520C20
        void ResetAnimationStateForNewEntity();  // RVA: 0x520300
        void SetAttackFrames(Sprite[][] newAttackFrames);  // RVA: 0x520BA0
        void SetAttack2Frames(Sprite[][] newAttack2Frames);  // RVA: 0x520B40
        void SetAttack3Frames(Sprite[][] newAttack3Frames);  // RVA: 0x520B60
        void SetAttackAnimationsEnabled(bool enabled);  // RVA: 0x520B70
        void SetHitFrames(Sprite[][] newHitFrames);  // RVA: 0x520E30
        void SetDeathFrames(Sprite[][] newDeathFrames);  // RVA: 0x520BE0
        void SetSlashOverlay(Image* slashImg, Sprite[][] slashSpriteFrames);  // RVA: 0x521000
        void SetSlashSopraFrames(Sprite[][] sopraFrames);  // RVA: 0x521140
        void SetSlashAttack3Frames(Sprite[][] atk3SlashFrames);  // RVA: 0x520EF0
        void SetSlashRightAboveFrames(Sprite[][] rightAboveFrames);  // RVA: 0x521110
        void SetSlashMagicFrames(Sprite[][] magicFrames);  // RVA: 0x520FE0
        void SetSlashRangedPosition(Vector2 pos);  // RVA: 0x521100
        void SetAttack2Mode(Attack2Mode mode);  // RVA: 0x520B50
        void SetSlashRightAbovePosition(Vector2 pos);  // RVA: 0x521130
        void SetSlashColors(Color standardColor, Color rightAboveColor);  // RVA: 0x520FC0
        void SetSlashAttack3Layout(Vector2 pos, Vector2 sizeOverride, int32_t startFrame);  // RVA: 0x520F80
        void SetSlashAttack3UpperSibling(Transform* upperBound);  // RVA: 0x520FA0
        void SetSlashPositions(Vector2 sottoPos, Vector2 sopraPos);  // RVA: 0x5210E0
        void SetSlashStartDelay(float seconds);  // RVA: 0x521160
        void SetKeepWeaponVisibleDuringAttack(bool keep);  // RVA: 0x520E40
        void ResizeSlashToPlayerPixelScale();  // RVA: 0x520820
        void CollectMaxBounds(Sprite[][] arr, float maxW, float maxH);  // RVA: 0x51F330
        void SetOverlayController(EquipOverlayController* controller);  // RVA: 0x520ED0
        void PlayAttack(bool suppressLunge, bool rangedAttack);  // RVA: 0x51F660
        void PlayHit();  // RVA: 0x51FEC0
        void PlayDeath();  // RVA: 0x51FC90
        void AdjustRectForDeath(Sprite* deathSprite);  // RVA: 0x51EF10
        void ResetDeath();  // RVA: 0x520750
        void AdjustRectForAnimation(Sprite* animSprite);  // RVA: 0x51EC30
        void RestoreIdleRect();  // RVA: 0x520A10
        void ForceRestoreIdleRect();  // RVA: 0x51F4F0
        void SetTargetImage(Image* img);  // RVA: 0x4ADCC0
        void SetFrameRate(float fps);  // RVA: 0x520C00
        void SetAttackFrameRate(float fps);  // RVA: 0x520B80
        void SetLungeParams(Transform* target, float distancePx, int32_t atk3Start, int32_t atk3End, int32_t atk2Start, int32_t atk2End);  // RVA: 0x520E50
        void PlayLungeOnly(float holdDuration);  // RVA: 0x520090
        IEnumerator* LungeOnlyCoroutine(float holdDuration);  // RVA: 0x51F5E0
        void ApplyLunge();  // RVA: 0x51F100
        void ReleaseLunge();  // RVA: 0x5201B0
        void SetAnimationMargins(float idleBottomPx, float attackBottomPx, float idleCenterX, float attackCenterX, float idleFrameW, float attackFrameW);  // RVA: 0x520AF0
        void SetMirrorXCompensation(bool mirror);  // RVA: 0x520EC0
        void SetHitFrameRate(float fps);  // RVA: 0x520E10
        void SetUseNativeSize(bool value);  // RVA: 0x5212A0
        void SetStaticSprite(Sprite* sprite);  // RVA: 0x521180
        void Stop();  // RVA: 0x521460
        void Play();  // RVA: 0x5201A0
        void UpdateSlashOverlay();  // RVA: 0x521470
        void StartSlashSopra();  // RVA: 0x5212B0
        void Update();  // RVA: 0x521760
        void .ctor();  // RVA: 0x522800
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <PlayLoop>d__6
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpriteLoopAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x529BD0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529D20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SpriteLoopAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float fps; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Coroutine* animCoroutine; // 0x0038
    
        // Methods
        void OnEnable();  // RVA: 0x522E00
        void OnDisable();  // RVA: 0x522DC0
        IEnumerator* PlayLoop();  // RVA: 0x522F70
        void .ctor();  // RVA: 0x4A99E0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class StatRow
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* labelText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* pointsText; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* totPointsText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* buttonLeft; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* buttonRight; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    StatsAllocationUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <Start>b__0();  // RVA: 0x52A080
    void <Start>b__1();  // RVA: 0x52A150
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class StatsAllocationUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t IDX_HP;
        // static int32_t IDX_ATK;
        // static int32_t IDX_DEF;
        // static int32_t IDX_CRIT;
        // static int32_t IDX_PARRY;
        // static String[][] StatLabels;
    
        uint8_t pad_0000[0x20]; // 0x0000
        float atkPerPoint; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float hpPerPoint; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float defPerPoint; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float critPercentPerPoint; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float parryPercentPerPoint; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* panelRoot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* creditsText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* powerUpButton; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        StatRow[][] statRows; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        EquipScreenUI* equipScreenUI; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Int32[][] pendingPoints; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        bool openedBeforeStart; // 0x0068
    
        // Methods
        void Awake();  // RVA: 0x5240A0
        void Start();  // RVA: 0x5251B0
        Il2CppString* GetCreditValueString(int32_t idx);  // RVA: 0x524310
        Il2CppString* GetPointsScoreString(int32_t idx, int32_t totalPoints);  // RVA: 0x524450
        bool get_IsOpen();  // RVA: 0x525C80
        void Open();  // RVA: 0x524A80
        void Close();  // RVA: 0x524160
        void ApplySideMirroring();  // RVA: 0x523E20
        void OnRightClick(int32_t idx);  // RVA: 0x5249B0
        void OnLeftClick(int32_t idx);  // RVA: 0x5245D0
        void OnPowerUpClicked();  // RVA: 0x524630
        static int32_t GetAllocated(PlayerState* ps, int32_t idx);  // RVA: 0x524290
        void RefreshUI();  // RVA: 0x524C80
        void PushPreviewToEquipScreen();  // RVA: 0x524BA0
        void .ctor();  // RVA: 0x525BD0
        static void .cctor();  // RVA: 0x525A80
    };

    // Namespace: AutoBattle.UI
    class StatTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* tooltipText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* tooltipPanel; // 0x0028
    
        // Methods
        void SetTooltipText(Il2CppString* text);  // RVA: 0x523D20
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x5239B0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x5239A0
        void OnDisable();  // RVA: 0x5239A0
        void HideTooltip();  // RVA: 0x523900
        GameObject* CreateTooltipPanel();  // RVA: 0x523410
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x5237B0
        static GameObject* BuildDefaultPanel(Transform* parent);  // RVA: 0x522FE0
        void PositionTooltip(RectTransform* panelRect, Canvas* rootCanvas);  // RVA: 0x523A60
        void .ctor();  // RVA: 0x523DD0
    };

    // Namespace: AutoBattle.UI
    class TextCtrl : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* targetText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Color normalColor; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        Color highlightedColor; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Color pressedColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Color selectedColor; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        Color disabledColor; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float fadeDuration; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* button; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        bool isPointerInside; // 0x0088
        bool isPointerDown; // 0x0089
        bool isSelected; // 0x008A
        bool wasInteractable; // 0x008B
        Color currentColor; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        Color targetColor; // 0x009C
        uint8_t pad_009D[0xF]; // 0x009D
        float lerpTimer; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool isLerping; // 0x00B0
    
        // Methods
        void Awake();  // RVA: 0x526E00
        void OnEnable();  // RVA: 0x5270E0
        void Update();  // RVA: 0x5278C0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x5273E0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x527510
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x5272A0
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x527640
        void OnSelect(BaseEventData* eventData);  // RVA: 0x527700
        void OnDeselect(BaseEventData* eventData);  // RVA: 0x526FB0
        Color EvaluateTargetColor();  // RVA: 0x526EC0
        void TransitionToColor(Color color);  // RVA: 0x527830
        void ApplyColor(Color color);  // RVA: 0x526D60
        void .ctor();  // RVA: 0x526D10
    };

    // Namespace: AutoBattle.UI
    class TextCtrlToggle : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* targetText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Color normalColor; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        Color highlightedColor; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Color pressedColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Color selectedColor; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        Color disabledColor; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float fadeDuration; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Toggle* toggle; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        bool isPointerInside; // 0x0088
        bool isPointerDown; // 0x0089
        bool wasInteractable; // 0x008A
        bool wasOn; // 0x008B
        Color currentColor; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        Color targetColor; // 0x009C
        uint8_t pad_009D[0xF]; // 0x009D
        float lerpTimer; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool isLerping; // 0x00B0
    
        // Methods
        void Awake();  // RVA: 0x525DA0
        void OnEnable();  // RVA: 0x526060
        void OnDisable();  // RVA: 0x525F70
        void Update();  // RVA: 0x526950
        void OnToggleValueChanged(bool isOn);  // RVA: 0x526820
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x526480
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x5265F0
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x526300
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x526760
        Color EvaluateTargetColor();  // RVA: 0x525E60
        void TransitionToColor(Color color);  // RVA: 0x5268C0
        void ApplyColor(Color color);  // RVA: 0x525D00
        void .ctor();  // RVA: 0x526D10
    };

    // Namespace: AutoBattle.UI
    class TextOutline : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Color outlineColor; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        float outlineThickness; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t outlineDirections; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        TMP_Text* tmpText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool meshNeedsUpdate; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        Color cachedColor; // 0x0044
        uint8_t pad_0045[0xF]; // 0x0045
        float cachedThickness; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int32_t cachedDirections; // 0x0058
    
        // Methods
        void Awake();  // RVA: 0x528550
        void OnEnable();  // RVA: 0x528AF0
        void OnDisable();  // RVA: 0x5289C0
        void OnTextChanged(Il2CppObject* obj);  // RVA: 0x528C40
        void LateUpdate();  // RVA: 0x528800
        void CacheSettings();  // RVA: 0x528760
        void ApplyOutline();  // RVA: 0x527C50
        Vector2[][] BuildOffsets();  // RVA: 0x5285A0
        static int32_t CountUsedTriangleIndices(Int32[][] triangles, int32_t maxVertIndex);  // RVA: 0x528780
        static void EnsureArraySize(T[][] array, int32_t minSize);  // RVA: 0x2B8680
        void .ctor();  // RVA: 0x528CB0
    };

    // Namespace: AutoBattle.UI
    class UIButtonSound : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool playClick; // 0x0020
        bool playHover; // 0x0021
    
        // Methods
        void OnPointerClick(PointerEventData* eventData);  // RVA: 0x52AB10
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x52ABE0
        void .ctor();  // RVA: 0x52ACB0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <Play>d__10
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    UIFlipbookAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <idx>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t <count>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x529D60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529F70
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class UIFlipbookAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float fps; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool loop; // 0x002C
        bool useUnscaledTime; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        Image* image; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Coroutine* playRoutine; // 0x0038
    
        // Methods
        void Awake();  // RVA: 0x52ACC0
        void OnEnable();  // RVA: 0x52AD10
        void OnDisable();  // RVA: 0x522DC0
        void SetFrames(Sprite[][] newFrames, float newFps);  // RVA: 0x52AEA0
        IEnumerator* Play();  // RVA: 0x52AE30
        void .ctor();  // RVA: 0x52AF50
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct NotificationType
{
public:
    // Static fields
    // static NotificationType LevelUp;
    // static NotificationType ItemDrop;
    // static NotificationType CraftOk;
    // static NotificationType SectorClear;
    // static NotificationType Death;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class UIManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* creationScreen; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* homeScreen; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* equipScreen; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* inventoryScreen; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* battleScreen; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* worldHomeScreen; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* worldBattleScreen; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        GameObject* sharedSettingsBar; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        GameObject* notificationPrefab; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Transform* notificationParent; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        ForgeScreenUI* forgeScreenUI; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        SidePanelController* equipSidePanel; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        SidePanelController* inventorySidePanel; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameScreen currentScreen; // 0x0088
    
        // Methods
        void Start();  // RVA: 0x52BB70
        void OnDisable();  // RVA: 0x52B180
        void ShowScreen(GameScreen screen);  // RVA: 0x52B4C0
        void ShowNotification(Il2CppString* message, NotificationType type);  // RVA: 0x52B320
        void HandleScreenChange(GameScreen screen);  // RVA: 0x52B170
        void HandleNotification(Il2CppString* message, Il2CppString* notifType);  // RVA: 0x52AF70
        void .ctor();  // RVA: 0x52BE10
    };

    // Namespace: AutoBattle.UI
    class UITemplate : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<System.String,AutoBattle.UI.UITemplate> registry;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* templateKey; // 0x0020
    
        // Methods
        static void RebuildRegistry();  // RVA: 0x53FF80
        static GameObject* Clone(Il2CppString* key, Transform* parent);  // RVA: 0x53FC00
        static bool HasTemplate(Il2CppString* key);  // RVA: 0x53FE30
        static void InvalidateRegistry();  // RVA: 0x53FF30
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.UI
    class VillageBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* luceFinestraSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* livelloSopraSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* cornicheFinestraSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite[][] ominoSfondoFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] ominoFinestraFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float ominoSfondoFrameRate; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float ominoSfondoWalkSpeed; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float ominoSfondoBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float ominoSfondoRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float ominoSfondoRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float ominoSfondoYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        bool ominoSfondoWalksRight; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float ominoFinestraFrameRate; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float ominoFinestraSpeed; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float ominoFinestraMinX; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float ominoFinestraMaxX; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float ominoFinestraBaseY; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        bool ominoFinestraFlipOnTurn; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float pixelScale; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        RectTransform* backgroundLayer; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        RectTransform* ominoSfondoLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* luceFinestraLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* ominoFinestraLayer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* livelloSopraLayer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* corniceFinestraLayer; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        RectTransform* rect; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Image* ominoSfondoImage; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        int32_t ominoSfondoFrameIdx; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float ominoSfondoFrameTimer; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float ominoSfondoX; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float ominoSfondoCurrentBaseY; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float ominoSfondoRespawnTimer; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool ominoSfondoActive; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float ominoSfondoHalfWidth; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Image* ominoFinestraImage; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        int32_t ominoFinestraFrameIdx; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float ominoFinestraFrameTimer; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float ominoFinestraX; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        int32_t ominoFinestraDirection; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        bool built; // 0x0100
    
        // Methods
        void Awake();  // RVA: 0x540130
        void OnEnable();  // RVA: 0x540D60
        void Build();  // RVA: 0x540190
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x540B80
        void Update();  // RVA: 0x540E10
        void SetSprites(Sprite* bg, Sprite[][] ominoSfondo, Sprite* luce, Sprite[][] ominoFinestra, Sprite* livelloSopra, Sprite* cornice);  // RVA: 0x540D80
        void .ctor();  // RVA: 0x5414B0
    };

    // Namespace: AutoBattle.UI
    class WorldFrameMirror : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* sourceFrame; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        RectTransform* myRT; // 0x0028
    
        // Methods
        void Awake();  // RVA: 0x5416E0
        void AutoDiscoverSource();  // RVA: 0x541520
        void LateUpdate();  // RVA: 0x541780
        void .ctor();  // RVA: 0x4AEF40
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <SendCoroutine>d__48
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* eventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bodyJson; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53D9D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53DB40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class AnalyticsManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AnalyticsManager* <Instance>k__BackingField;
        // static Il2CppString* PREF_OPTED_OUT;
        // static Il2CppString* PREF_CONSENT_SHOWN;
        // static bool TRACK_ITEM_DROPS;
        // static int32_t MAX_PRELOGIN_BUFFERED;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* sessionId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float sessionStartRealtime; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool sessionStartFired; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t maxSectorReachedThisSession; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t totalDeathsThisSession; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t totalDeathsInArena; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t totalPvPMatchesThisSession; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t currentSectorTracked; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool sessionEndFired; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        System.Collections.Generic.Queue<System.ValueTuple<System.String,System.String>> preLoginBuffer; // 0x0048
    
        // Methods
        static AnalyticsManager* get_Instance();  // RVA: 0x52EC70
        static void set_Instance(AnalyticsManager* value);  // RVA: 0x52EEB0
        static bool get_IsOptedOut();  // RVA: 0x52EE20
        static void set_IsOptedOut(bool value);  // RVA: 0x52EF10
        static bool get_HasShownConsent();  // RVA: 0x52EC30
        static void set_HasShownConsent(bool value);  // RVA: 0x52EE60
        static bool get_IsEnabled();  // RVA: 0x52ED00
        static bool get_IsCollecting();  // RVA: 0x52ECB0
        void Awake();  // RVA: 0x52BFB0
        void Start();  // RVA: 0x52CBE0
        void OnDestroy();  // RVA: 0x52C5D0
        void HandlePlayFabLoginSuccess();  // RVA: 0x52C560
        void OnApplicationQuit();  // RVA: 0x52C5B0
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x52C590
        void TrySendSessionEnd();  // RVA: 0x52C5B0
        void TrackSessionStart();  // RVA: 0x52E730
        void TrackSessionEnd();  // RVA: 0x52E4D0
        void TrackSectorClear(int32_t sector, int32_t level, int32_t powerScore);  // RVA: 0x52DFB0
        void TrackPlayerDeath(int32_t sector, int32_t level, int32_t powerScore, Il2CppString* enemyCategory, Il2CppString* enemyColor, int32_t hpPctBefore, int32_t sectorEnemyIndex);  // RVA: 0x52DA50
        void TrackLevelUps(int32_t levelBefore, int32_t levelAfter, int32_t sector, int32_t powerScore);  // RVA: 0x52D850
        void TrackItemDrop(ItemInstance* item, Il2CppString* source);  // RVA: 0x4B4640
        void TrackSectorEntered(int32_t sector, Il2CppString* source);  // RVA: 0x52E2A0
        void TrackCharacterReset(int32_t level, int32_t sector, int32_t powerScore, int32_t sectorEnemyIndex);  // RVA: 0x52D1F0
        void TrackPvPMatch(bool won, int32_t rpDelta, int32_t opponentPS, int32_t myPS, int32_t totalPvPMatches);  // RVA: 0x52DD30
        void TrackArenaWaveReached(int32_t wave, int32_t killsInWave, int32_t maxWaveRecord, bool waveCleared);  // RVA: 0x52CF90
        void TrackArenaDeath(int32_t wave, int32_t checkpointWave);  // RVA: 0x52CDF0
        void TrackForgeExecuted(Il2CppString* rarityFrom, Il2CppString* rarityTo, Il2CppString* sourceScreen);  // RVA: 0x52D5A0
        void TrackStaminaExhausted(int32_t sector, int32_t level);  // RVA: 0x52EA10
        void TrackDemoLockedFeatureHit(Il2CppString* featureName, Il2CppString* sourceScreen);  // RVA: 0x52D410
        void Send(Il2CppString* eventName, System.Collections.Generic.Dictionary<System.String,System.Object> body);  // RVA: 0x52C8A0
        IEnumerator* SendCoroutine(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x52C810
        void EnqueuePreLogin(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x52C270
        void FlushPreLoginBuffer();  // RVA: 0x52C360
        void .ctor();  // RVA: 0x52EBB0
    };

    // Namespace: AutoBattle.Steam
    class PlayerSnapshot
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* playerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t level; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t powerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t hp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float atk; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float def; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float crit; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float parry; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> equippedItems; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* playFabId; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t characterType; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float totalBattleTime; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t rankingPoints; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t totalPvPMatches; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int64_t lastUpdatedTicks; // 0x0058
    
        // Methods
        void .ctor();  // RVA: 0x533010
    };

    // Namespace: AutoBattle.Steam
    class EquippedItemInfo
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* slotName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* itemName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* rarity; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* category; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class LoginWithSteamRequest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* SteamTicket; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool CreateAccount; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* TitleId; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class LoginWithCustomIdRequest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* CustomId; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool CreateAccount; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* TitleId; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class LoginResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LoginResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class LoginResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* SessionTicket; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* PlayFabId; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class <>c__DisplayClass12_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayFabClient* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <LoginWithSteam>b__0(bool success, Il2CppString* response);  // RVA: 0x53E0B0
};

// Namespace: <global>
class <>c__DisplayClass13_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayFabClient* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <LoginWithCustomId>b__0(bool success, Il2CppString* response);  // RVA: 0x53E2B0
};

// Namespace: <global>
class <>c__DisplayClass14_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <UpdateUserData>b__0(bool success, Il2CppString* response);  // RVA: 0x53E440
};

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <UpdateUserDataRaw>b__0(bool success, Il2CppString* response);  // RVA: 0x53E4F0
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <GetUserData>b__0(bool success, Il2CppString* response);  // RVA: 0x53E5A0
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <UpdatePlayerStatistics>b__0(bool success, Il2CppString* response);  // RVA: 0x53E5D0
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <GetLeaderboardAroundPlayer>b__0(bool success, Il2CppString* response);  // RVA: 0x53E5A0
};

// Namespace: <global>
class <>c__DisplayClass19_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <GetLeaderboard>b__0(bool success, Il2CppString* response);  // RVA: 0x53E5A0
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <UpdateDisplayName>b__0(bool success, Il2CppString* response);  // RVA: 0x53E680
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* eventName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <WritePlayerEvent>b__0(bool success, Il2CppString* response);  // RVA: 0x53E730
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* functionName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <ExecuteCloudScript>b__0(bool success, Il2CppString* response);  // RVA: 0x53E800
};

// Namespace: <global>
class <ExecuteCloudScript>d__22
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* functionName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* functionParamsJson; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x537160
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5373B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <GetLeaderboard>d__19
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t startPosition; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t maxResults; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x539C40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539DE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <GetLeaderboardAroundPlayer>d__18
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t maxResults; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x539A80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539C00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <GetUserData>d__16
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] keys; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* targetPlayFabId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53A460
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A7C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LoginWithCustomId>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* customId; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53B5F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B7B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LoginWithSteam>d__12
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* steamTicketHex; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53C320
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C4E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PostAuthenticatedRequest>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* endpoint; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonBody; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Action<System.Boolean,System.String> callback; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53CF40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CFC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <PostRequest>d__24
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* endpoint; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonBody; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool authenticated; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Action<System.Boolean,System.String> callback; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    UnityWebRequest* <request>5__2; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x53D550
    bool MoveNext();  // RVA: 0x53D000
    void <>m__Finally1();  // RVA: 0x53D5E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53D510
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <UpdateDisplayName>d__20
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabClient* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* displayName; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53E9F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53EB80
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <UpdatePlayerStatistics>d__17
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t value; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53EBC0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53ED40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <UpdateUserData>d__14
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* key; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayFabClient* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53F120
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53F370
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <UpdateUserDataRaw>d__15
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* key; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonValue; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53EEA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53F0E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <WritePlayerEvent>d__21
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* eventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* bodyJson; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53F930
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53FBC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class PlayFabClient
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* titleId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* sessionTicket; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* playFabId; // 0x0020
    
        // Methods
        Il2CppString* get_SessionTicket();  // RVA: 0x4B66E0
        Il2CppString* get_PlayFabId();  // RVA: 0x4F7650
        bool get_IsLoggedIn();  // RVA: 0x52FB40
        Il2CppString* get_BaseUrl();  // RVA: 0x52FAF0
        void .ctor(Il2CppString* titleId);  // RVA: 0x52FAB0
        IEnumerator* LoginWithSteam(Il2CppString* steamTicketHex, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F4C0
        IEnumerator* LoginWithCustomId(Il2CppString* customId, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F410
        IEnumerator* UpdateUserData(Il2CppString* key, Il2CppString* value, System.Action<System.Boolean> callback);  // RVA: 0x52F930
        IEnumerator* UpdateUserDataRaw(Il2CppString* key, Il2CppString* jsonValue, System.Action<System.Boolean> callback);  // RVA: 0x52F870
        IEnumerator* GetUserData(Il2CppString* targetPlayFabId, String[][] keys, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F350
        IEnumerator* UpdatePlayerStatistics(Il2CppString* statName, int32_t value, System.Action<System.Boolean> callback);  // RVA: 0x52F7B0
        IEnumerator* GetLeaderboardAroundPlayer(Il2CppString* statName, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F1D0
        IEnumerator* GetLeaderboard(Il2CppString* statName, int32_t startPosition, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F290
        IEnumerator* UpdateDisplayName(Il2CppString* displayName, System.Action<System.Boolean> callback);  // RVA: 0x52F700
        IEnumerator* WritePlayerEvent(Il2CppString* eventName, Il2CppString* bodyJson, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F9F0
        IEnumerator* ExecuteCloudScript(Il2CppString* functionName, Il2CppString* functionParamsJson, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F110
        IEnumerator* PostAuthenticatedRequest(Il2CppString* endpoint, Il2CppString* jsonBody, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F570
        IEnumerator* PostRequest(Il2CppString* endpoint, Il2CppString* jsonBody, bool authenticated, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F630
        Il2CppString* EscapeJsonString(Il2CppString* str);  // RVA: 0x52EFB0
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class LeaderboardResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class LeaderboardResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> Leaderboard; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class GetUserDataResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GetUserDataResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class GetUserDataResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UserDataDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class UserDataDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UserDataRecord* PlayerSnapshot; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class UserDataRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* LastUpdated; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* Permission; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<System.Boolean> <>9__56_1;
    // static System.Action<System.Boolean> <>9__57_1;


    // Methods
    static void .cctor();  // RVA: 0x53E980
    void .ctor();  // RVA: 0x4BC410
    void <LoginWithSteam>b__56_1(bool _);  // RVA: 0x4B4640
    void <LoginWithDevCustomId>b__57_1(bool _);  // RVA: 0x4B4640
};

// Namespace: <global>
class <>c__DisplayClass56_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* resultMsg; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool done; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <LoginWithSteam>b__0(bool s, Il2CppString* msg);  // RVA: 0x53E8E0
};

// Namespace: <global>
class <>c__DisplayClass57_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* resultMsg; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <LoginWithDevCustomId>b__0(bool s, Il2CppString* msg);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass59_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <ClearUserData>b__0(bool ok);  // RVA: 0x4ED6C0
};

// Namespace: <global>
class <>c__DisplayClass61_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <LogPvPChallengeCloudScript>b__0(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass62_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <ResetPvPLeaderboardVersionCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass63_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <HardResetAllPvPRPCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass65_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool snapshotOk; // 0x0010
    bool psOk; // 0x0011
    bool lvlOk; // 0x0012

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <UploadSnapshotCoroutine>b__0(bool ok);  // RVA: 0x53E910
    void <UploadSnapshotCoroutine>b__1(bool ok);  // RVA: 0x53E920
    void <UploadSnapshotCoroutine>b__2(bool ok);  // RVA: 0x53E930
};

// Namespace: <global>
class <>c__DisplayClass68_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchOpponentsCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x502ED0
    void <FetchOpponentsCoroutine>b__1(bool s, Il2CppString* r);  // RVA: 0x502ED0
    void <FetchOpponentsCoroutine>b__2(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass68_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchOpponentsCoroutine>b__3(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <GetPlayFabIDsFromSteamIDs>b__0(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass74_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> mapping; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchFriendSnapshots>b__0(System.Collections.Generic.Dictionary<System.String,System.String> m);  // RVA: 0x502F50
};

// Namespace: <global>
class <>c__DisplayClass74_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchFriendSnapshots>b__1(bool s, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <ClearUserData>d__59
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* key; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x536FA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x537120
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FetchFriendSnapshots>d__74
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> friends; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>>> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    <>c__DisplayClass74_0* <>8__1; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    <>c__DisplayClass74_1* <>8__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> <results>5__2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int32_t <fetchCount>5__3; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List.Enumerator<System.ValueTuple<System.UInt64,System.String>> <>7__wrap3; // 0x0058
    uint8_t pad_0059[0x1F]; // 0x0059
    System.ValueTuple<System.UInt64,System.String> <friend>5__5; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    Il2CppString* <playFabId>5__6; // 0x0088

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x537E40
    bool MoveNext();  // RVA: 0x5373F0
    void <>m__Finally1();  // RVA: 0x537ED0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x537E00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FetchLeaderboard>d__79
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t startPos; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t maxResults; // 0x003C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x538700
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538810
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FetchLeaderboardAroundPlayer>d__80
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t maxResults; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x537F20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538020
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FetchOpponentsCoroutine>d__68
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass68_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass68_1* <>8__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool <useRanking>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <matchmakingStat>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> <entries>5__4; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List.Enumerator<AutoBattle.Steam.LeaderboardEntry> <>7__wrap4; // 0x0050
    uint8_t pad_0051[0x17]; // 0x0051
    LeaderboardEntry* <candidate>5__6; // 0x0068

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x539810
    bool MoveNext();  // RVA: 0x538850
    void <>m__Finally1();  // RVA: 0x5398A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5397D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <FetchUserData>d__58
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* playFabId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* key; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x5398F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539A40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <GetPlayFabIDsFromSteamIDs>d__73
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] steamIds; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.Dictionary<System.String,System.String>> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    <>c__DisplayClass73_0* <>8__1; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<System.String,System.String> <result>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <batchStart>5__3; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x539E20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A420
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <HardResetAllPvPRPCoroutine>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass63_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53A800
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53AA40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LogPvPChallengeCloudScript>d__61
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* challengerName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* opponentPlayFabId; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t challengerLevel; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t challengerPowerScore; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool challengerWon; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    PlayFabManager* <>4__this; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    <>c__DisplayClass61_0* <>8__1; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53B040
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B5B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LoginWithDevCustomId>d__57
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass57_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53B7F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53BCC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LoginWithRetry>d__55
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53BD00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C2E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LoginWithSteam>d__56
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass56_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float <timeout>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <elapsed>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53C520
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CF00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <ResetPvPLeaderboardVersionCoroutine>d__62
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass62_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53D630
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53D870
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <SaveUserData>d__78
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* key; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53D8B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53D990
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <UpdateStatistic>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53ED80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53EE60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <UploadSnapshotCoroutine>d__65
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* snapshotJson; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass65_0* <>8__1; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayerSnapshot* snapshot; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53F3B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53F770
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <WriteAnalyticsEvent>d__53
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* eventName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* bodyJson; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53F7B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53F8F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class PlayFabManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static PlayFabManager* <Instance>k__BackingField;
        // static Il2CppString* FULL_TITLE_ID;
        // static Il2CppString* DEMO_TITLE_ID;
        // static Il2CppString* SNAPSHOT_KEY;
        // static Il2CppString* POWERSCORE_STAT;
        // static Il2CppString* PVPRATING_STAT;
        // static Il2CppString* LEVEL_STAT;
        // static int32_t MATCHMAKING_CALIBRATION_THRESHOLD;
        // static int32_t MAX_LOGIN_RETRIES;
        // static float RETRY_DELAY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        PlayFabClient* client; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* <LastLoginError>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* <LoginStateInfo>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t loginRetryCount; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Action* OnLoginSuccess; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Action<System.String> OnLoginFailed; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<AutoBattle.Steam.PlayerSnapshot> OnOpponentFound; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* OnNoOpponentFound; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* lastUploadedSnapshotJson; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.List<AutoBattle.Steam.PlayerSnapshot> cachedOpponents; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        bool isFetchingOpponents; // 0x0070
    
        // Methods
        static PlayFabManager* get_Instance();  // RVA: 0x532C50
        static void set_Instance(PlayFabManager* value);  // RVA: 0x532FA0
        static Il2CppString* get_CurrentTitleId();  // RVA: 0x532C00
        static Il2CppString* get_TITLE_ID();  // RVA: 0x532C00
        bool get_IsLoggedIn();  // RVA: 0x532CA0
        Il2CppString* get_PlayFabId();  // RVA: 0x532CF0
        Il2CppString* get_LastLoginError();  // RVA: 0x532CD0
        void set_LastLoginError(Il2CppString* value);  // RVA: 0x4A7D10
        Il2CppString* get_LoginStateInfo();  // RVA: 0x532CE0
        void set_LoginStateInfo(Il2CppString* value);  // RVA: 0x533000
        void add_OnLoginSuccess(Action* value);  // RVA: 0x532A00
        void remove_OnLoginSuccess(Action* value);  // RVA: 0x532DB0
        void add_OnLoginFailed(System.Action<System.String> value);  // RVA: 0x532950
        void remove_OnLoginFailed(System.Action<System.String> value);  // RVA: 0x532D00
        void add_OnOpponentFound(System.Action<AutoBattle.Steam.PlayerSnapshot> value);  // RVA: 0x532B40
        void remove_OnOpponentFound(System.Action<AutoBattle.Steam.PlayerSnapshot> value);  // RVA: 0x532EF0
        void add_OnNoOpponentFound(Action* value);  // RVA: 0x532AA0
        void remove_OnNoOpponentFound(Action* value);  // RVA: 0x532E50
        bool get_IsFetchingOpponents();  // RVA: 0x532C90
        bool HasCachedOpponents();  // RVA: 0x5314A0
        System.Collections.Generic.List<AutoBattle.Steam.PlayerSnapshot> get_CachedOpponents();  // RVA: 0x532BF0
        void Awake();  // RVA: 0x52FB60
        void OnDestroy();  // RVA: 0x531B40
        IEnumerator* WriteAnalyticsEvent(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x5327D0
        void Login();  // RVA: 0x531A50
        IEnumerator* LoginWithRetry();  // RVA: 0x531970
        IEnumerator* LoginWithSteam();  // RVA: 0x5319E0
        IEnumerator* LoginWithDevCustomId();  // RVA: 0x531900
        IEnumerator* FetchUserData(Il2CppString* playFabId, Il2CppString* key, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530970
        IEnumerator* ClearUserData(Il2CppString* key, System.Action<System.Boolean> callback);  // RVA: 0x530620
        void LogPvPChallenge(Il2CppString* opponentPlayFabId, Il2CppString* opponentName, int32_t opponentLevel, int32_t opponentPowerScore, bool challengerWon);  // RVA: 0x531660
        IEnumerator* LogPvPChallengeCloudScript(Il2CppString* opponentPlayFabId, Il2CppString* challengerName, int32_t challengerLevel, int32_t challengerPowerScore, bool challengerWon);  // RVA: 0x531590
        IEnumerator* ResetPvPLeaderboardVersionCoroutine();  // RVA: 0x531FE0
        IEnumerator* HardResetAllPvPRPCoroutine();  // RVA: 0x531430
        void UploadSnapshot();  // RVA: 0x532600
        IEnumerator* UploadSnapshotCoroutine(PlayerSnapshot* snapshot, Il2CppString* snapshotJson);  // RVA: 0x532550
        PlayerSnapshot* BuildSnapshot(PlayerState* player, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x52FF60
        void PreFetchOpponents();  // RVA: 0x531F40
        IEnumerator* FetchOpponentsCoroutine();  // RVA: 0x530900
        PlayerSnapshot* GetRandomOpponent(int32_t playerPowerScore, float rangePercent);  // RVA: 0x530AE0
        EnemyState* SnapshotToEnemyState(PlayerSnapshot* snapshot);  // RVA: 0x532110
        PlayerSnapshot* BuildFallbackSnapshot(LeaderboardEntry* entry);  // RVA: 0x52FD80
        static bool IsSelf(PlayerSnapshot* op, Il2CppString* myPlayFabId, Il2CppString* mySteamName);  // RVA: 0x5314F0
        IEnumerator* GetPlayFabIDsFromSteamIDs(String[][] steamIds, System.Action<System.Collections.Generic.Dictionary<System.String,System.String>> callback);  // RVA: 0x530A30
        IEnumerator* FetchFriendSnapshots(System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> friends, System.Action<System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>>> callback);  // RVA: 0x5306D0
        System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> ParseLeaderboardResponse(Il2CppString* json);  // RVA: 0x531C10
        PlayerSnapshot* ParseSnapshotFromUserData(Il2CppString* json);  // RVA: 0x531D20
        IEnumerator* UpdateStatistic(Il2CppString* statName, int32_t value, System.Action<System.Boolean> callback);  // RVA: 0x532490
        IEnumerator* SaveUserData(Il2CppString* key, Il2CppString* value, System.Action<System.Boolean> callback);  // RVA: 0x532050
        IEnumerator* FetchLeaderboard(Il2CppString* statName, int32_t startPos, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530840
        IEnumerator* FetchLeaderboardAroundPlayer(Il2CppString* statName, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530780
        void .ctor();  // RVA: 0x532880
    };

    // Namespace: AutoBattle.Steam
    class LeaderboardEntry
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* PlayFabId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* DisplayName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t StatValue; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        int32_t Position; // 0x0024
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingResponse
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        SteamIdMappingData* data; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Steam.SteamIdMappingEntry> Data; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingEntry
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* SteamStringId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* PlayFabId; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class RankingDataResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class RankingDataResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class RankingDataDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataRecord* RankingData; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class RankingDataRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class LeaderboardResponseWrapper
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardResponseWrapperData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class LeaderboardResponseWrapperData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> Leaderboard; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool statOk; // 0x0010
    bool dataOk; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    System.Action<System.Boolean> <>9__1; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <SyncToPlayFabCoroutine>b__1(bool ok);  // RVA: 0x53E910
    void <SyncToPlayFabCoroutine>b__0(bool ok);  // RVA: 0x53E920
};

// Namespace: <global>
class <>c__DisplayClass74_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <LoadFromPlayFab>b__0(bool ok, Il2CppString* r);  // RVA: 0x502ED0
};

// Namespace: <global>
class <>c__DisplayClass75_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool selfResyncOk; // 0x0010
    bool topOk; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    Il2CppString* topResponse; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool aroundOk; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* aroundResponse; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <FetchLeaderboard>b__0(bool ok);  // RVA: 0x53E910
    void <FetchLeaderboard>b__1(bool ok, Il2CppString* r);  // RVA: 0x53E940
    void <FetchLeaderboard>b__2(bool ok, Il2CppString* r);  // RVA: 0x53E960
};

// Namespace: <global>
class <FetchLeaderboard>d__75
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<AutoBattle.Steam.LeaderboardEntry[],AutoBattle.Steam.LeaderboardEntry[],System.Int32> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RankingManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass75_0* <>8__1; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    LeaderboardEntry[][] <topEntries>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    LeaderboardEntry[][] <aroundEntries>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <myPosition>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x538060
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5386C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <LoadFromPlayFab>d__74
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass74_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RankingManager* <>4__this; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53AA80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B000
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <SyncToPlayFabCoroutine>d__73
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RankingManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass73_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <attempt>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x53DB80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E070
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class RankingManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static RankingManager* <Instance>k__BackingField;
        // static Il2CppString* PVPRATING_STAT;
        // static Il2CppString* RANKING_DATA_KEY;
        // static int32_t RP_WIN_BASE;
        // static int32_t RP_LOSE_BASE;
        // static int32_t RP_WIN_MAX;
        // static int32_t RP_LOSE_MAX;
        // static int32_t RP_OFFLINE_WIN_BASE;
        // static int32_t RP_OFFLINE_LOSE_BASE;
        // static float PS_BONUS_WIN_FACTOR;
        // static float PS_BONUS_LOSE_FACTOR;
        // static int32_t STREAK_ACTIVATE;
        // static float STREAK_MULT_4;
        // static float STREAK_MULT_5;
        // static int32_t SEASON_DURATION_DAYS;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RankingData* data; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool suppressSync; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> OnRPChanged; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Steam.RankTier> OnTierReached; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<System.Int32> OnNewSeason; // 0x0040
    
        // Methods
        static RankingManager* get_Instance();  // RVA: 0x534D60
        static void set_Instance(RankingManager* value);  // RVA: 0x535070
        void BeginBatchProcess();  // RVA: 0x533330
        void EndBatchProcess();  // RVA: 0x533970
        int32_t get_CurrentRP();  // RVA: 0x534B50
        int32_t get_WinStreak();  // RVA: 0x534E40
        RankTier get_CurrentTier();  // RVA: 0x534B70
        RankTier get_HighestTier();  // RVA: 0x534D00
        int32_t get_HighestRP();  // RVA: 0x534CE0
        int32_t get_SeasonNumber();  // RVA: 0x534DE0
        int32_t get_SeasonWins();  // RVA: 0x534E00
        int32_t get_SeasonLosses();  // RVA: 0x534DC0
        int32_t get_TotalPvPMatches();  // RVA: 0x534E20
        System.Collections.Generic.List<AutoBattle.Steam.PvPMatchRecord> get_RecentMatches();  // RVA: 0x534DA0
        int32_t get_DaysRemaining();  // RVA: 0x534BD0
        int32_t get_FloorRP();  // RVA: 0x534CC0
        void add_OnRPChanged(System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> value);  // RVA: 0x5349F0
        void remove_OnRPChanged(System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> value);  // RVA: 0x534F10
        void add_OnTierReached(System.Action<AutoBattle.Steam.RankTier> value);  // RVA: 0x534AA0
        void remove_OnTierReached(System.Action<AutoBattle.Steam.RankTier> value);  // RVA: 0x534FC0
        void add_OnNewSeason(System.Action<System.Int32> value);  // RVA: 0x534940
        void remove_OnNewSeason(System.Action<System.Int32> value);  // RVA: 0x534E60
        void Awake();  // RVA: 0x533110
        void OnDestroy();  // RVA: 0x533D10
        int32_t ProcessPvPResult(bool playerWon, int32_t playerPowerScore, int32_t opponentPowerScore, Il2CppString* opponentName, int32_t opponentLevel, bool isOffline);  // RVA: 0x5340F0
        int32_t ProcessPvPResult(bool playerWon, int32_t playerPowerScore, int32_t opponentPowerScore, bool isOffline);  // RVA: 0x5342C0
        int32_t CalculateActiveRP(bool playerWon, int32_t playerPS, int32_t opponentPS);  // RVA: 0x533340
        int32_t CalculateOfflineRP(bool playerWon, int32_t playerPS, int32_t opponentPS);  // RVA: 0x533450
        float GetStreakMultiplier();  // RVA: 0x533A10
        static RankTier GetTierForRP(int32_t rp);  // RVA: 0x533B20
        static int32_t GetTierMinRP(RankTier tier);  // RVA: 0x533BA0
        static int32_t GetTierMaxRP(RankTier tier);  // RVA: 0x533B60
        static Il2CppString* GetTierName(RankTier tier);  // RVA: 0x533BD0
        static Color GetTierColor(RankTier tier);  // RVA: 0x533A60
        void CheckSeasonRollover();  // RVA: 0x533540
        void StartNewSeason(int32_t seasonNum);  // RVA: 0x534690
        void DebugForceSeasonReset();  // RVA: 0x533610
        void DebugHardResetAllPvPRP();  // RVA: 0x533790
        void PerformSeasonReset();  // RVA: 0x533FA0
        void SyncToPlayFab();  // RVA: 0x534800
        IEnumerator* SyncToPlayFabCoroutine();  // RVA: 0x534790
        IEnumerator* LoadFromPlayFab();  // RVA: 0x533CA0
        IEnumerator* FetchLeaderboard(System.Action<AutoBattle.Steam.LeaderboardEntry[],AutoBattle.Steam.LeaderboardEntry[],System.Int32> callback);  // RVA: 0x533980
        LeaderboardEntry[][] ParseLeaderboardEntries(Il2CppString* json);  // RVA: 0x533DE0
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.Steam
    struct RankTier
    {
    public:
        // Static fields
        // static RankTier Bronze;
        // static RankTier Silver;
        // static RankTier Gold;
        // static RankTier Diamond;
        // static RankTier Legend;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Steam
    class RankingData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t rp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t highestRP; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t floorRP; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t winStreak; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t seasonNumber; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t seasonStartTicks; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int64_t seasonEndTicks; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t seasonWins; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t seasonLosses; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t totalPvPMatches; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<AutoBattle.Steam.PvPMatchRecord> recentMatches; // 0x0048
    
        // Methods
        void .ctor();  // RVA: 0x533090
    };

    // Namespace: AutoBattle.Steam
    class PvPMatchRecord
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* opponentName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t opponentLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        bool playerWon; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t rpDelta; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool isOffline; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int64_t timestampTicks; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Steam
    class SteamManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static SteamManager* <Instance>k__BackingField;
        // static uint32_t FULL_APP_ID;
        // static uint32_t DEMO_APP_ID;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool <Initialized>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        SteamAPIWarningMessageHook_t* m_SteamAPIWarningMessageHook; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Steamworks.Callback<Steamworks.GetTicketForWebApiResponse_t> m_GetTicketForWebApiResponse; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* m_pendingWebApiTicketHex; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool m_webApiTicketReady; // 0x0040
        bool m_webApiTicketFailed; // 0x0041
        bool m_webApiTicketRequestInFlight; // 0x0042
    
        // Methods
        static SteamManager* get_Instance();  // RVA: 0x536EC0
        static void set_Instance(SteamManager* value);  // RVA: 0x536F40
        static uint32_t get_CurrentAppId();  // RVA: 0x536E80
        bool get_Initialized();  // RVA: 0x536EB0
        void set_Initialized(bool value);  // RVA: 0x502EF0
        static void SteamAPIDebugTextHook(int32_t nSeverity, StringBuilder* pchDebugText);  // RVA: 0x536E00
        void Awake();  // RVA: 0x536230
        void Update();  // RVA: 0x536E70
        void OnDestroy();  // RVA: 0x536A30
        Il2CppString* GetPlayerName();  // RVA: 0x536A10
        uint64_t GetSteamId();  // RVA: 0x536A20
        Texture2D* GetPlayerAvatar();  // RVA: 0x536840
        void RequestWebApiTicket();  // RVA: 0x536D00
        void OnGetTicketForWebApiResponse(GetTicketForWebApiResponse_t response);  // RVA: 0x536B10
        bool get_IsWebApiTicketReady();  // RVA: 0x536F10
        bool get_IsWebApiTicketFailed();  // RVA: 0x536F00
        bool get_IsWebApiTicketRequestInFlight();  // RVA: 0x536F20
        Il2CppString* get_WebApiTicketHex();  // RVA: 0x536F30
        System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> GetFriendsWithGame();  // RVA: 0x536690
        void .ctor();  // RVA: 0x4AEF40
    };

} // namespace AutoBattle.Steam

namespace AutoBattle.Save
{

    // Namespace: AutoBattle.Save
    class SaveData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t genderInt; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t level; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t xp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float stamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> inventory; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Save.EquipSlotSave> equippedSlots; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t currentSector; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t sectorEnemy; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Boolean[][] sectorCleared; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t currentHp; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t nextUid; // 0x004C
    
        // Methods
        void .ctor();  // RVA: 0x5350D0
    };

    // Namespace: AutoBattle.Save
    class EquipSlotSave
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* slotName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t itemUid; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
        void .ctor(Il2CppString* slotName, int32_t itemUid);  // RVA: 0x52EF60
    };

} // namespace AutoBattle.Save

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AutoBattle.Data.ItemInstance> <>9__4_0;


    // Methods
    static void .cctor();  // RVA: 0x55A5D0
    void .ctor();  // RVA: 0x4BC410
    int32_t <BuildCanonicalString>b__4_0(ItemInstance* a, ItemInstance* b);  // RVA: 0x557260
};

namespace AutoBattle.Save
{

    // Namespace: AutoBattle.Save
    class SaveIntegrity
    {
    public:
        // Static fields
        // static Byte[][] _encodedKey;
    
    
        // Methods
        static Byte[][] DecodeKey();  // RVA: 0x535FF0
        static Il2CppString* ComputeChecksum(PlayerState* state);  // RVA: 0x535C90
        static bool Verify(PlayerState* state, Il2CppString* storedChecksum);  // RVA: 0x536110
        static Il2CppString* BuildCanonicalString(PlayerState* ps);  // RVA: 0x535220
        static void .cctor();  // RVA: 0x5361A0
    };

    // Namespace: AutoBattle.Save
    class SaveSystem
    {
    public:
        // Static fields
        // static Il2CppString* LEGACY_PREFS_KEY;
        // static Il2CppString* LEGACY_PREFS_KEY_ALT;
        // static Action* OnTamperedSaveDetected;
    
    
        // Methods
        static Il2CppString* GetSavePath(uint64_t steamId);  // RVA: 0x54FB90
        static void Save(PlayerState* state, uint64_t steamId);  // RVA: 0x550670
        static PlayerState* Load(uint64_t steamId);  // RVA: 0x54FE10
        static Il2CppString* MigrateLegacyFields(Il2CppString* json);  // RVA: 0x5500A0
        static bool HasSave(uint64_t steamId);  // RVA: 0x54FD20
        static void Delete(uint64_t steamId);  // RVA: 0x54F9C0
        static int32_t ReadWipeGeneration(uint64_t steamId);  // RVA: 0x550450
        static void StampWipeGeneration(uint64_t steamId, int32_t generation);  // RVA: 0x550840
        static Il2CppString* ReadOrMigrate(uint64_t steamId);  // RVA: 0x550240
        static PlayerState* TryRestoreFromBackup(uint64_t steamId);  // RVA: 0x5509C0
        static Il2CppString* ReadLegacyPrefs(uint64_t steamId);  // RVA: 0x550140
        static bool HasLegacyPrefs(uint64_t steamId);  // RVA: 0x54FC70
        static void DeleteLegacyPrefs(uint64_t steamId);  // RVA: 0x54F890
        static void AtomicWrite(Il2CppString* path, Il2CppString* content);  // RVA: 0x54F7C0
        static void TryDelete(Il2CppString* path);  // RVA: 0x5508F0
    };

    // Namespace: AutoBattle.Save
    class SaveWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* payload; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* checksum; // 0x0018
    
        // Methods
        static Il2CppString* Wrap(PlayerState* state);  // RVA: 0x550ED0
        static UnwrapResult* Unwrap(Il2CppString* json);  // RVA: 0x550BD0
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Save
    class UnwrapResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PlayerState* state; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool checksumValid; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* error; // 0x0020
    
        // Methods
        void .ctor(PlayerState* state, bool checksumValid, Il2CppString* error);  // RVA: 0x55A6B0
    };

} // namespace AutoBattle.Save

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GenerateFirstClearReward>b__0(ItemData* id);  // RVA: 0x557460
};

namespace AutoBattle.Progression
{

    // Namespace: AutoBattle.Progression
    class SectorProgressionManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Data.SectorData> sectors; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PlayerState* playerState; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameManager* gameManager; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Data.SectorData> OnSectorChanged; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<AutoBattle.Data.SectorData,System.Boolean> OnSectorCleared; // 0x0040
    
        // Methods
        void add_OnSectorChanged(System.Action<AutoBattle.Data.SectorData> value);  // RVA: 0x551B80
        void remove_OnSectorChanged(System.Action<AutoBattle.Data.SectorData> value);  // RVA: 0x551CE0
        void add_OnSectorCleared(System.Action<AutoBattle.Data.SectorData,System.Boolean> value);  // RVA: 0x551C30
        void remove_OnSectorCleared(System.Action<AutoBattle.Data.SectorData,System.Boolean> value);  // RVA: 0x551D90
        void Start();  // RVA: 0x551A60
        SectorData* GetCurrentSector();  // RVA: 0x551760
        Il2CppString* GetCurrentEnemyInfo();  // RVA: 0x551400
        void AdvanceEnemy();  // RVA: 0x551040
        void OnPlayerDeath();  // RVA: 0x5517F0
        void OnSectorComplete();  // RVA: 0x5518C0
        ItemInstance* GenerateFirstClearReward(int32_t sectorIndex);  // RVA: 0x5510E0
        Il2CppString* GetColorVariantName(int32_t colorVariant);  // RVA: 0x551370
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.Progression
    class StaminaSystem : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float regenRatePerSecond; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float maxStamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Action<System.Single> OnStaminaChanged; // 0x0028
    
        // Methods
        void add_OnStaminaChanged(System.Action<System.Single> value);  // RVA: 0x5524B0
        void remove_OnStaminaChanged(System.Action<System.Single> value);  // RVA: 0x552560
        void Update();  // RVA: 0x5522D0
        bool ConsumeStamina(float amount);  // RVA: 0x551E40
        bool HasEnoughStamina(float required);  // RVA: 0x552040
        float GetCurrentStamina();  // RVA: 0x551FA0
        void RestoreStamina();  // RVA: 0x552160
        void .ctor();  // RVA: 0x552490
    };

} // namespace AutoBattle.Progression

// Namespace: <global>
class <>c__DisplayClass5_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity fromRarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetRecipe>b__0(CraftingRecipe* r);  // RVA: 0x4D3410
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class CraftingSystem : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.List<AutoBattle.Data.CraftingRecipe> recipes;
        // static bool recipesInitialized;
    
        uint8_t pad_0000[0x20]; // 0x0000
        InventoryManager* inventoryManager; // 0x0020
    
        // Methods
        void Start();  // RVA: 0x544130
        static void InitializeRecipes();  // RVA: 0x543DC0
        static CraftingRecipe* GetRecipe(Rarity fromRarity);  // RVA: 0x543CC0
        bool CanCraft(Rarity fromRarity, PlayerState* playerState);  // RVA: 0x543270
        ItemInstance* DoCraft(Rarity fromRarity, PlayerState* playerState, System.Func<AutoBattle.Data.Rarity,AutoBattle.Data.ItemInstance> generateItem);  // RVA: 0x543370
        int32_t GetAvailableCount(Rarity rarity, PlayerState* playerState);  // RVA: 0x5439F0
        void .ctor();  // RVA: 0x4AEF40
        static void .cctor();  // RVA: 0x544240
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static Action* <>9__6_0;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__10_0;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__10_1;


    // Methods
    static void .cctor();  // RVA: 0x55A640
    void .ctor();  // RVA: 0x4BC410
    void <Start>b__6_0();  // RVA: 0x557350
    bool <GetCompatibleItems>b__10_0(ItemInstance* i);  // RVA: 0x557290
    bool <GetCompatibleItems>b__10_1(ItemInstance* i);  // RVA: 0x5572B0
};

// Namespace: <global>
class <>c__DisplayClass10_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* otherEquipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetCompatibleItems>b__2(ItemInstance* i);  // RVA: 0x557410
};

// Namespace: <global>
class <>c__DisplayClass10_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquipSlot expectedSlot; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetCompatibleItems>b__3(ItemInstance* i);  // RVA: 0x557440
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class EquipmentManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnEquipChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        String[][] SLOT_NAMES; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PlayerState* playerState; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        InventoryManager* inventoryManager; // 0x0038
    
        // Methods
        void add_OnEquipChanged(Action* value);  // RVA: 0x545510
        void remove_OnEquipChanged(Action* value);  // RVA: 0x5455B0
        void Start();  // RVA: 0x544FD0
        void EquipItem(Il2CppString* slotName, ItemInstance* item);  // RVA: 0x5444C0
        void UnequipSlot(Il2CppString* slotName);  // RVA: 0x545230
        ItemInstance* GetEquippedItem(Il2CppString* slotName);  // RVA: 0x544CF0
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetCompatibleItems(Il2CppString* slotName);  // RVA: 0x544830
        EquipSlot ParseSlotNameToEquipSlot(Il2CppString* slotName);  // RVA: 0x544E30
        void .ctor();  // RVA: 0x545380
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__17_3;
    // static System.Func<AutoBattle.Data.ItemInstance,AutoBattle.Data.Rarity> <>9__17_0;


    // Methods
    static void .cctor();  // RVA: 0x55A560
    void .ctor();  // RVA: 0x4BC410
    bool <GetItemsByFilter>b__17_3(ItemInstance* i);  // RVA: 0x557290
    Rarity <GetItemsByFilter>b__17_0(ItemInstance* i);  // RVA: 0x5572E0
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <RemoveItem>b__0(ItemInstance* i);  // RVA: 0x4D3410
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquipSlot slotEnum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetItemsByFilter>b__1(ItemInstance* i);  // RVA: 0x557440
};

// Namespace: <global>
class <>c__DisplayClass17_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarityEnum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetItemsByFilter>b__2(ItemInstance* i);  // RVA: 0x557840
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetEquippedItems>b__0(ItemInstance* i);  // RVA: 0x4D3410
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class InventoryManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnInventoryChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<System.String,AutoBattle.Data.ItemInstance> OnItemEquipped; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Action<System.String> OnItemUnequipped; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Data.ItemInstance> OnItemCrafted; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PlayerState* playerState; // 0x0040
    
        // Methods
        void add_OnInventoryChanged(Action* value);  // RVA: 0x54ADE0
        void remove_OnInventoryChanged(Action* value);  // RVA: 0x54B090
        void add_OnItemEquipped(System.Action<System.String,AutoBattle.Data.ItemInstance> value);  // RVA: 0x54AF30
        void remove_OnItemEquipped(System.Action<System.String,AutoBattle.Data.ItemInstance> value);  // RVA: 0x54B1E0
        void add_OnItemUnequipped(System.Action<System.String> value);  // RVA: 0x54AFE0
        void remove_OnItemUnequipped(System.Action<System.String> value);  // RVA: 0x54B290
        void add_OnItemCrafted(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x54AE80
        void remove_OnItemCrafted(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x54B130
        void Start();  // RVA: 0x54AD80
        void NotifyInventoryChanged();  // RVA: 0x54A860
        void AddItem(ItemInstance* item);  // RVA: 0x549F90
        void RemoveItem(int32_t uid);  // RVA: 0x54A8E0
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetItemsByFilter(Il2CppString* filter);  // RVA: 0x54A310
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetEquippedItems();  // RVA: 0x54A060
        void SellItem(int32_t uid);  // RVA: 0x54AD70
        void RaiseItemEquipped(Il2CppString* slot, ItemInstance* item);  // RVA: 0x54A8A0
        void RaiseItemUnequipped(Il2CppString* slot);  // RVA: 0x54A8C0
        void RaiseItemCrafted(ItemInstance* newItem);  // RVA: 0x54A880
        void .ctor();  // RVA: 0x4AEF40
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c__DisplayClass3_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GenerateItem>b__0(ItemData* t);  // RVA: 0x557460
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class ItemGenerator : public MonoBehaviour
    {
    public:
        // Static fields
        // static ItemGenerator* instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Data.ItemData> itemTemplates; // 0x0020
    
        // Methods
        void Awake();  // RVA: 0x54B690
        ItemInstance* GenerateItem(Rarity rarity, int32_t uid);  // RVA: 0x54BA60
        ItemInstance* GenerateItemBySector(SectorData* sector, int32_t uid);  // RVA: 0x54B830
        ItemInstance* GenerateItemByLevel(int32_t level, int32_t uid);  // RVA: 0x54B790
        ItemInstance* GenerateItemByLevel(int32_t level, int32_t uid, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54B7D0
        ItemInstance* GenerateItemBySector(SectorData* sector, int32_t uid, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54B970
        Rarity RollRarityFromSector(SectorData* sector, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54C120
        Rarity RollRarityFromLevel(int32_t level);  // RVA: 0x54BF10
        Rarity RollRarityFromLevelLegacy(int32_t level);  // RVA: 0x54BD50
        void LoadTemplatesFromResources(Il2CppString* resourcePath);  // RVA: 0x54BCB0
        System.Collections.Generic.List<AutoBattle.Data.ItemData> GetTemplates();  // RVA: 0x54BC40
        void SetTemplates(System.Collections.Generic.List<AutoBattle.Data.ItemData> templates);  // RVA: 0x4ADCC0
        void .ctor();  // RVA: 0x54C1F0
    };

} // namespace AutoBattle.Inventory

namespace AutoBattle.Data
{

    // Namespace: AutoBattle.Data
    class CraftingRecipe
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Rarity fromRarity; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        Rarity toRarity; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t cost; // 0x0018
    
        // Methods
        void .ctor(Rarity from, Rarity to, int32_t cost);  // RVA: 0x543220
    };

    // Namespace: AutoBattle.Data
    class EnemyCategoryData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        Il2CppString* categoryName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* icon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<AutoBattle.Data.EnemyVariantData> variants; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] idleSprites; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float positionY; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float positionX; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool lungeEnabled; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t lungeStartFrame; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t lungeEndFrame; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float biteImpactDelaySec; // 0x004C
    
        // Methods
        void .ctor();  // RVA: 0x5442E0
    };

    // Namespace: AutoBattle.Data
    class EnemyVariantData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        EnemyColor color; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hp; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float atk; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float def; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float crit; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float parry; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t level; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t xpBase; // 0x002C
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Data
    class FrameAnchorSet
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector2 head; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 body; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 weapon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 weapon2; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Data
    class EquipAnchorData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        float pixelScaleReference; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        FrameAnchorSet[][] idleFrames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        FrameAnchorSet[][] attackFrames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        FrameAnchorSet[][] attack2Frames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        FrameAnchorSet[][] attack3Frames; // 0x0038
    
        // Methods
        FrameAnchorSet* GetAnchors(bool isAttacking, int32_t frameIndex, int32_t attackVariant);  // RVA: 0x544370
        void .ctor();  // RVA: 0x544400
    };

    // Namespace: AutoBattle.Data
    class GameConstants
    {
    public:
        // Static fields
        // static int32_t BASE_HP;
        // static float BASE_ATK;
        // static float BASE_DEF;
        // static float BASE_CRIT;
        // static float BASE_PARRY;
        // static float LEVEL_SCALING_FACTOR;
        // static float XP_MULTIPLIER;
        // static float XP_EXPONENT;
        // static int32_t MAX_LEVEL;
        // static float XP_DEFEAT_MULTIPLIER;
        // static float XP_SCALING_PENALTY;
        // static float XP_SCALING_MIN;
        // static float DMG_RANDOM_MIN;
        // static float DMG_RANDOM_MAX;
        // static float CRIT_MULTIPLIER;
        // static float COMBAT_TURN_INTERVAL;
        // static Single[][] REGEN_BASELINE_PCT_BY_SECTOR;
        // static int32_t SAVE_WIPE_GENERATION;
        // static int32_t WIPE_GEN_FIELD_INTRODUCED;
        // static float STAMINA_COST_PER_BATTLE;
        // static float STAMINA_REGEN_PER_SEC;
        // static float STAMINA_MAX;
        // static float STAMINA_MIN_TO_BATTLE;
        // static float PVP_TIME_TRIGGER_SECONDS;
        // static int32_t PVP_XP_WIN;
        // static int32_t PVP_XP_LOSE;
        // static float PAUSE_BETWEEN_BATTLES;
        // static float PAUSE_BETWEEN_BATTLES_WITH_DROP;
        // static float PAUSE_AFTER_SECTOR_CLEAR;
        // static float PS_HP_WEIGHT;
        // static float PS_ATK_WEIGHT;
        // static float PS_DEF_WEIGHT;
        // static float PS_CRIT_WEIGHT;
        // static float PS_PARRY_WEIGHT;
        // static int32_t PITY_DROP_THRESHOLD;
        // static int32_t ARENA_ENEMIES_PER_WAVE;
        // static float PARRY_CAP;
        // static float CRIT_CAP;
        // static float MONO_SYNERGY_MULTIPLIER;
    
    
        // Methods
        static float GetRegenBaselinePct(int32_t sector);  // RVA: 0x545650
        static void .cctor();  // RVA: 0x545730
    };

    // Namespace: AutoBattle.Data
    struct Rarity
    {
    public:
        // Static fields
        // static Rarity Common;
        // static Rarity Rare;
        // static Rarity Epic;
        // static Rarity Legendary;
        // static Rarity Mythic;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct ElementCategory
    {
    public:
        // Static fields
        // static ElementCategory Nessuna;
        // static ElementCategory Arcane;
        // static ElementCategory Flame;
        // static ElementCategory Frost;
        // static ElementCategory Holy;
        // static ElementCategory Shadow;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct EquipSlot
    {
    public:
        // Static fields
        // static EquipSlot Testa;
        // static EquipSlot Corpo;
        // static EquipSlot Cintura;
        // static EquipSlot Arma;
        // static EquipSlot Anello1;
        // static EquipSlot Trinket;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct EnemyColor
    {
    public:
        // Static fields
        // static EnemyColor Verde;
        // static EnemyColor Giallo;
        // static EnemyColor Viola;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct CharacterType
    {
    public:
        // Static fields
        // static CharacterType Character1;
        // static CharacterType Character2;
        // static CharacterType Character3;
        // static CharacterType Character4;
        // static CharacterType Character5;
        // static CharacterType Character6;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct GameScreen
    {
    public:
        // Static fields
        // static GameScreen Creation;
        // static GameScreen Home;
        // static GameScreen Equip;
        // static GameScreen Inventory;
        // static GameScreen Battle;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    class ItemData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        int32_t id; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* itemName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        EquipSlot slot; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Rarity rarity; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        ElementCategory category; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t hp; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float atk; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float def; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float crit; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float parry; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool isMelee; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.String> effects; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* icon; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* overlaySprite; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite[][] overlayAnimFrames; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite[][] iconAnimFrames; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float overlayAnimFps; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        bool hasAttackOverlayAnim; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        Il2CppString* attackOverlaySpritesResource; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        float attackOverlayFps; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        AttackOverlayMode attackOverlayMode; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        Vector2 attackOverlayLocalOffset; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool hasProjectile; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        SpriteCollection* projectileSprites; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SpriteCollection* projectileImpactSprites; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Vector2 projectileSpawnOffset; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Il2CppString* projectileSpritesResource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* projectileImpactSpritesResource; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float projectileTravelTime; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float projectileSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float projectileImpactSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float projectileImpactDuration; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float projectileArcHeight; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t projectileCountPerAttack; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float projectileSpreadOffset; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float projectileSpreadDelay; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool projectileRotateToDirection; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color projectileTint; // 0x00EC
        uint8_t pad_00ED[0xF]; // 0x00ED
        Color projectileImpactTint; // 0x00FC
        uint8_t pad_00FD[0xF]; // 0x00FD
        float projectileSpawnDelay; // 0x010C
    
        // Methods
        SpriteCollection* GetProjectileSprites();  // RVA: 0x54B3F0
        SpriteCollection* GetProjectileImpactSprites();  // RVA: 0x54B340
        void .ctor();  // RVA: 0x54B4A0
    };

    // Namespace: AutoBattle.Data
    struct AttackOverlayMode
    {
    public:
        // Static fields
        // static AttackOverlayMode ReplaceWeaponSprite;
        // static AttackOverlayMode OverlayAbove;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    class ItemInstance
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t uid; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t templateId; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        Il2CppString* itemName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        EquipSlot slot; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Rarity rarity; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        ElementCategory category; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t hp; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float atk; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float def; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float crit; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float parry; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        String[][] effects; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool isNew; // 0x0048
    
        // Methods
        bool IsShield();  // RVA: 0x54C4A0
        static bool IsShieldName(Il2CppString* name);  // RVA: 0x54C370
        static ItemInstance* FromTemplate(ItemData* template, int32_t uniqueId);  // RVA: 0x54C270
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Data
    struct PlayerStats
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float atk; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float def; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float crit; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float parry; // 0x0020
    
        // Methods
        static PlayerStats get_Zero();  // RVA: 0x54F7B0
    };

    // Namespace: AutoBattle.Data
    class SectorData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        int32_t sectorId; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* sectorName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t totalEnemies; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Data.EnemyCategoryData> categories; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float commonDropPct; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float rareDropPct; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float epicDropPct; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float legendaryDropPct; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float mythicDropPct; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        Rarity clearRewardRarity; // 0x004C
    
        // Methods
        int32_t get_PhaseSize();  // RVA: 0x550FA0
        void .ctor();  // RVA: 0x4B6200
    };

    // Namespace: AutoBattle.Data
    class TooltipSettings : public ScriptableObject
    {
    public:
        // Static fields
        // static TooltipSettings* _instance;
    
        uint8_t pad_0000[0x18]; // 0x0000
        float effectIndent; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float effectLineHeight; // 0x001C
    
        // Methods
        float get_EffectIndent();  // RVA: 0x5569F0
        float get_EffectLineHeight();  // RVA: 0x556A00
        static TooltipSettings* get_Instance();  // RVA: 0x556A10
        void .ctor();  // RVA: 0x5569D0
    };

} // namespace AutoBattle.Data

// Namespace: <global>
class <CrossfadeCoroutine>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AmbienceManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioClip* newClip; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AudioSource* <fadingOut>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioSource* <fadingIn>5__3; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float <duration>5__4; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float <elapsed>5__5; // 0x0044

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x556AE0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x556E50
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class AmbienceManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AmbienceManager* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip* homeClip; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* outskirtsClip; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioClip* graveyardClip; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioClip* forestClip; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float crossfadeDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float baseVolume; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        AudioSource* sourceA; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AudioSource* sourceB; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AudioSource* activeSrc; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Coroutine* crossfadeCoroutine; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        AudioClip* currentClip; // 0x0068
    
        // Methods
        static AmbienceManager* get_Instance();  // RVA: 0x542050
        static void set_Instance(AmbienceManager* value);  // RVA: 0x542090
        void Awake();  // RVA: 0x5418B0
        void EnsureSourceDefaults(AudioSource* src);  // RVA: 0x541E00
        void EnsureMixerRouting();  // RVA: 0x541BF0
        void PlaySectorAmbience(int32_t sectorIndex);  // RVA: 0x541FE0
        void PlayHomeAmbience();  // RVA: 0x541FD0
        void StopAmbience();  // RVA: 0x542020
        AudioClip* GetClipForSector(int32_t sectorIndex);  // RVA: 0x541FB0
        void CrossfadeTo(AudioClip* newClip);  // RVA: 0x541AD0
        IEnumerator* CrossfadeCoroutine(AudioClip* newClip);  // RVA: 0x541A40
        void .ctor();  // RVA: 0x542030
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <FadeHomeMusicCoroutine>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float targetVolume; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float <startVolume>5__2; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <duration>5__3; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <elapsed>5__4; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x556E90
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x557040
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class AudioManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AudioManager* <Instance>k__BackingField;
        // static Il2CppString* KEY_MUSIC;
        // static Il2CppString* KEY_SFX;
        // static Il2CppString* KEY_MUTE;
        // static Il2CppString* PARAM_MUSIC;
        // static Il2CppString* PARAM_SFX;
        // static float MIN_LINEAR;
        // static float MIN_DB;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioMixer* mixer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioMixerGroup* musicMixerGroup; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioMixerGroup* sfxMixerGroup; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float musicVolume; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float sfxVolume; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool isMuted; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AudioSource* musicSource; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool itemPopupToggle; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AudioClip* damageSfx; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        AudioClip* parrySfx; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        AudioClip* enemyKillSfx; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        AudioClip* playerDeathSfx; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        AudioClip* levelCompleteSfx; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        AudioClip* vsSfx; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        AudioClip* attackSfx1; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        AudioClip* attackSfx2; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        AudioClip* itemPopupSfx1; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        AudioClip* itemPopupSfx2; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        AudioClip* homeMusic; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        float homeMusicVolume; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float homeMusicFadeDuration; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        AudioSource* homeMusicSource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Coroutine* homeMusicFadeCoroutine; // 0x00C0
    
        // Methods
        static AudioManager* get_Instance();  // RVA: 0x543160
        static void set_Instance(AudioManager* value);  // RVA: 0x5431C0
        float get_MusicVolume();  // RVA: 0x5431A0
        float get_SFXVolume();  // RVA: 0x5431B0
        bool get_IsMuted();  // RVA: 0x536F10
        AudioMixerGroup* get_MusicMixerGroup();  // RVA: 0x532CD0
        AudioMixerGroup* get_SFXMixerGroup();  // RVA: 0x532CE0
        void Awake();  // RVA: 0x542210
        void SetMusicVolume(float value);  // RVA: 0x542E50
        void SetSFXVolume(float value);  // RVA: 0x542F50
        void SetMuteAll(bool muted);  // RVA: 0x542EE0
        void RegisterMusicSource(AudioSource* source);  // RVA: 0x542D20
        void PlaySFX(AudioClip* clip);  // RVA: 0x542A20
        void PlayDamageSfx();  // RVA: 0x542840
        void PlayParrySfx();  // RVA: 0x542A00
        void PlayEnemyKillSfx();  // RVA: 0x542850
        void PlayPlayerDeathSfx();  // RVA: 0x542A10
        void PlayLevelCompleteSfx();  // RVA: 0x5429F0
        void PlayAttackSfx1();  // RVA: 0x542820
        void PlayAttackSfx2();  // RVA: 0x542830
        void PlayItemPopupSfx();  // RVA: 0x5429B0
        void PlayVsSfx();  // RVA: 0x542D10
        void EnsureHomeMusicSourceDefaults();  // RVA: 0x542540
        void PlayHomeMusic();  // RVA: 0x542860
        void StopHomeMusic();  // RVA: 0x5430A0
        void StartHomeMusicFade(float targetVolume);  // RVA: 0x542FE0
        IEnumerator* FadeHomeMusicCoroutine(float targetVolume);  // RVA: 0x5426A0
        void ApplyVolumes();  // RVA: 0x5420F0
        static float LinearToDb(float linear);  // RVA: 0x542720
        void SaveSettings();  // RVA: 0x542DE0
        void LoadSettings();  // RVA: 0x542780
        void .ctor();  // RVA: 0x543130
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Predicate<AutoBattle.Data.ItemData> <>9__69_0;


    // Methods
    static void .cctor();  // RVA: 0x55A4F0
    void .ctor();  // RVA: 0x4BC410
    bool <StartNewGame>b__69_0(ItemData* item);  // RVA: 0x557300
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <RefreshInventoryNames>b__0(ItemData* t);  // RVA: 0x4BC3E0
};

// Namespace: <global>
class <Start>d__57
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameManager* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x557080
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x557220
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class GameManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static GameManager* <Instance>k__BackingField;
        // static float SNAPSHOT_REFRESH_INTERVAL_SEC;
        // static bool <DebugFastPvP>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool isDemo; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Data.SectorData> sectors; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PlayerState* playerState; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameScreen currentScreen; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ItemGenerator* itemGenerator; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<AutoBattle.Data.GameScreen> OnScreenChanged; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* OnGameStateChanged; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Action* OnEquipmentChanged; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Action* OnStartPvEBattle; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Action* OnStartPvPBattle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<AutoBattle.Data.GameScreen> OnScreenChange; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.String,System.String> OnNotification; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Action<System.Boolean> OnBattleStateChange; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Action* OnStaminaDepleted; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Action<System.String> OnSteamInitialized; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float pvpTimer; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float snapshotRefreshTimer; // 0x00A4
    
        // Methods
        static GameManager* get_Instance();  // RVA: 0x549710
        static void set_Instance(GameManager* value);  // RVA: 0x549F30
        static bool get_IsDemo();  // RVA: 0x549750
        static int32_t get_EffectiveMaxLevel();  // RVA: 0x549690
        int32_t get_EffectiveSectorCount();  // RVA: 0x5496C0
        void add_OnScreenChanged(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x5492E0
        void remove_OnScreenChanged(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549B90
        void add_OnGameStateChanged(Action* value);  // RVA: 0x5490D0
        void remove_OnGameStateChanged(Action* value);  // RVA: 0x549980
        void add_OnEquipmentChanged(Action* value);  // RVA: 0x549030
        void remove_OnEquipmentChanged(Action* value);  // RVA: 0x5498E0
        void add_OnStartPvEBattle(Action* value);  // RVA: 0x549440
        void remove_OnStartPvEBattle(Action* value);  // RVA: 0x549CF0
        void add_OnStartPvPBattle(Action* value);  // RVA: 0x5494E0
        void remove_OnStartPvPBattle(Action* value);  // RVA: 0x549D90
        void add_OnScreenChange(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549230
        void remove_OnScreenChange(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549AE0
        void add_OnNotification(System.Action<System.String,System.String> value);  // RVA: 0x549170
        void remove_OnNotification(System.Action<System.String,System.String> value);  // RVA: 0x549A20
        void add_OnBattleStateChange(System.Action<System.Boolean> value);  // RVA: 0x548F70
        void remove_OnBattleStateChange(System.Action<System.Boolean> value);  // RVA: 0x549820
        void add_OnStaminaDepleted(Action* value);  // RVA: 0x549390
        void remove_OnStaminaDepleted(Action* value);  // RVA: 0x549C40
        void add_OnSteamInitialized(System.Action<System.String> value);  // RVA: 0x549580
        void remove_OnSteamInitialized(System.Action<System.String> value);  // RVA: 0x549E30
        System.Collections.Generic.List<AutoBattle.Data.ItemData> get_AllItems();  // RVA: 0x532CD0
        System.Collections.Generic.List<AutoBattle.Data.SectorData> get_Sectors();  // RVA: 0x532CE0
        GameScreen get_CurrentScreen();  // RVA: 0x549640
        ItemGenerator* get_ItemGenerator();  // RVA: 0x549810
        void Awake();  // RVA: 0x545810
        void ApplyForcedSaveWipeIfNeeded();  // RVA: 0x5457C0
        void DeduplicateAllItems();  // RVA: 0x546500
        IEnumerator* Start();  // RVA: 0x548A00
        static bool get_DebugFastPvP();  // RVA: 0x549650
        static void set_DebugFastPvP(bool value);  // RVA: 0x549EF0
        void Update();  // RVA: 0x548B30
        void TriggerPvPBattle();  // RVA: 0x548B00
        void ShowScreen(GameScreen screen);  // RVA: 0x548260
        void ClearNewBadges();  // RVA: 0x545E80
        void StartNewGame(Il2CppString* name, CharacterType characterType);  // RVA: 0x548370
        void ResetGame();  // RVA: 0x547FE0
        void SaveGame();  // RVA: 0x548200
        void LoadGame();  // RVA: 0x547730
        void RefreshInventoryNames();  // RVA: 0x547D20
        SectorData* GetCurrentSector();  // RVA: 0x546890
        bool IsBattleActive();  // RVA: 0x547570
        void StartBattle();  // RVA: 0x5482C0
        void StopBattle();  // RVA: 0x548A70
        void GoToEquipScreen();  // RVA: 0x546B60
        void GoToInventoryScreen();  // RVA: 0x546BC0
        bool IsGameOver();  // RVA: 0x547590
        void RequestNextBattle();  // RVA: 0x547FA0
        void DebugSetSector(int32_t sectorIndex);  // RVA: 0x5462B0
        void DebugEnterArena();  // RVA: 0x545F90
        void DebugSelectSectorOrArena(int32_t index);  // RVA: 0x5460F0
        void ShowNotification(Il2CppString* message, Il2CppString* type);  // RVA: 0x548240
        void OnApplicationQuit();  // RVA: 0x547A20
        void OnDisable();  // RVA: 0x547A60
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x5479D0
        void InitializeWindowManager();  // RVA: 0x5471F0
        void InitializeAudioManager();  // RVA: 0x546C20
        void InitializePlayFab();  // RVA: 0x546D00
        void OnPlayFabLoginSuccess();  // RVA: 0x547AF0
        void InitializeRanking();  // RVA: 0x546FE0
        void OnPlayFabLoginFailed(Il2CppString* error);  // RVA: 0x547A70
        void NotifySnapshotUpload();  // RVA: 0x5478C0
        void NotifyEquipmentChanged();  // RVA: 0x5478A0
        bool IsPlayFabAvailable();  // RVA: 0x5475B0
        void EnsureCanvasScalerDPI();  // RVA: 0x546800
        void InitializeSteam();  // RVA: 0x547110
        Il2CppString* GetSteamPlayerName();  // RVA: 0x546A30
        uint64_t GetSteamId();  // RVA: 0x546930
        bool IsSteamAvailable();  // RVA: 0x547670
        void .ctor();  // RVA: 0x548EA0
    };

    // Namespace: AutoBattle.Core
    class LocalizationManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static LocalizationManager* _instance;
        // static Il2CppString* PREF_LANGUAGE_INDEX;
        // static Il2CppString* DEFAULT_LANGUAGE_CODE;
        // static Il2CppString* RESOURCES_FOLDER;
        // static bool _isQuitting;
        // static String[][] LanguageCodes;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.Dictionary<System.String,System.String> entries; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.Dictionary<System.String,System.String> fallbackEntries; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentLanguageCode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isLoaded; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.HashSet<System.String> warnedMissingKeys; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Action* OnLanguageChanged; // 0x0048
    
        // Methods
        static void ResetStatics();  // RVA: 0x54D7A0
        static LocalizationManager* get_Instance();  // RVA: 0x54E2C0
        void add_OnLanguageChanged(Action* value);  // RVA: 0x54E1D0
        void remove_OnLanguageChanged(Action* value);  // RVA: 0x54E540
        Il2CppString* get_CurrentLanguage();  // RVA: 0x532CE0
        bool get_IsLoaded();  // RVA: 0x54E530
        static System.Collections.Generic.IReadOnlyList<System.String> get_AvailableLanguages();  // RVA: 0x54E270
        void Awake();  // RVA: 0x54C5D0
        void OnApplicationQuit();  // RVA: 0x54D670
        void OnDestroy();  // RVA: 0x54D6C0
        void EnsureLoaded();  // RVA: 0x54C7A0
        void SetLanguage(Il2CppString* langCode);  // RVA: 0x54DAC0
        void SetLanguageByIndex(int32_t index);  // RVA: 0x54D8E0
        static System.Collections.Generic.List<System.Int32> GetAvailableLanguageIndices();  // RVA: 0x54C8B0
        Il2CppString* Get(Il2CppString* key);  // RVA: 0x54CFA0
        Il2CppString* Get(Il2CppString* key, Object[][] args);  // RVA: 0x54D230
        Il2CppString* GetEffectText(Il2CppString* canonicalEnglishEffect);  // RVA: 0x54CA60
        static Il2CppString* ComputeEffectSlug(Il2CppString* canonical);  // RVA: 0x54C750
        Il2CppString* GetItemName(Il2CppString* canonicalEnglishName);  // RVA: 0x54CD00
        Il2CppString* GetEnemyName(Il2CppString* canonicalEnglishName);  // RVA: 0x54CBB0
        Il2CppString* GetSectorName(Il2CppString* canonicalEnglishName);  // RVA: 0x54CE50
        void LoadLanguageInternal(Il2CppString* langCode);  // RVA: 0x54D570
        static System.Collections.Generic.Dictionary<System.String,System.String> LoadLanguageDictionary(Il2CppString* langCode);  // RVA: 0x54D320
        static Il2CppString* ResolveCodeFromIndex(int32_t index);  // RVA: 0x54D820
        static Il2CppString* Slugify(Il2CppString* source);  // RVA: 0x54DC60
        void .ctor();  // RVA: 0x54E0E0
        static void .cctor();  // RVA: 0x54DE30
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c__DisplayClass39_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetEquippedItem>b__0(ItemInstance* item);  // RVA: 0x4D3410
};

// Namespace: <global>
class <>c__DisplayClass42_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* item; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetElementSynergies>b__0(ItemInstance* it);  // RVA: 0x4D3410
    bool <GetElementSynergies>b__1(ItemData* it);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass43_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetItemByUid>b__0(ItemInstance* item);  // RVA: 0x4D3410
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class PlayerState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        CharacterType characterType; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t level; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t xp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float stamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t currentSector; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t sectorEnemy; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Boolean[][] sectorCleared; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t currentHp; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> inventory; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<System.String> equippedSlots; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.Int32> equippedUids; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float lastPvPTime; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool battleActive; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t nextUid; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float totalBattleTime; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t sector0DropCount; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        int32_t killsWithoutDrop; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t appliedWipeGeneration; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool endlessMode; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        int32_t waveIndex; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        int32_t waveKillCount; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t maxWaveRecord; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t unspentStatPoints; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        int32_t allocatedHp; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        int32_t allocatedAtk; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        int32_t allocatedDef; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        int32_t allocatedCrit; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        int32_t allocatedParry; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Il2CppString* runId; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        float sectorEnteredBattleTime; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t deathsInSectorPersistent; // 0x00AC
    
        // Methods
        void EnsureAnalyticsRunFields();  // RVA: 0x54E680
        System.Collections.Generic.Dictionary<System.String,System.Int32> get_equipped();  // RVA: 0x54F3E0
        void set_equipped(System.Collections.Generic.Dictionary<System.String,System.Int32> value);  // RVA: 0x54F500
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> get_Inventory();  // RVA: 0x54F3D0
        int32_t GenerateUid();  // RVA: 0x54E8C0
        ItemInstance* GetEquippedItem(Il2CppString* slot);  // RVA: 0x54EEA0
        void EquipItem(Il2CppString* slot, ItemInstance* item);  // RVA: 0x54E720
        void UnequipSlot(Il2CppString* slot);  // RVA: 0x54F210
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> GetElementSynergies(System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x54E8D0
        ItemInstance* GetItemByUid(int32_t uid);  // RVA: 0x54EFE0
        bool IsItemEquipped(int32_t uid);  // RVA: 0x54F0C0
        int32_t AddXP(int32_t amount);  // RVA: 0x54E5E0
        void .ctor();  // RVA: 0x54F2C0
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class BelowHpEffect
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float thresholdPct; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float bonusAtkPct; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float bonusDefPct; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float bonusCritPct; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t regenHpPerTick; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool immune; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t immuneSeconds; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float lifeStealPct; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float absorbDamagePct; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t bonusAtkFlat; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t bonusToAllStatsFlat; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t bonusDamagePerAttack; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t regenPerAttack; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t regenPerCrit; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float attackLifestealPct; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    bool immuneToCrits; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float permanentDefPct; // 0x0050

    // Methods
    void .ctor();  // RVA: 0x4BC410
};

// Namespace: <global>
class <>c__DisplayClass11_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <GetTotalStats>b__0(ItemInstance* item);  // RVA: 0x4D3410
    bool <GetTotalStats>b__1(ItemData* item);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <CalcRegenPerFight>b__0(ItemInstance* item);  // RVA: 0x4D3410
    bool <CalcRegenPerFight>b__1(ItemData* item);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* pattern; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> result; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcTimedRegen>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x557480
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* pattern; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> result; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcEveryNSecTemporaryBuffs>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x557860
};

// Namespace: <global>
class <>c__DisplayClass19_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Int32[][] caps; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcEveryNSecMaxStack>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x557C90
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcEveryNAttacks>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x557F80
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcEveryNCrits>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5586F0
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnCritBonusDamage>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x558940
};

// Namespace: <global>
class <>c__DisplayClass23_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnCritPendingMods>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x558CB0
};

// Namespace: <global>
class <>c__DisplayClass24_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnCritEnemyDefDebuff>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559070
};

// Namespace: <global>
class <>c__DisplayClass25_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnCritDefTimed>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559230
};

// Namespace: <global>
class <>c__DisplayClass26_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnParryPendingMods>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559430
};

// Namespace: <global>
class <>c__DisplayClass27_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnParryDefTimed>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559AF0
};

// Namespace: <global>
class <>c__DisplayClass28_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcFirstHitHeal>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559DF0
};

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcFirstHitPermanentAtkPct>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x55A0E0
};

// Namespace: <global>
class <>c__DisplayClass30_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <ForEachEquippedEffect>b__0(ItemInstance* item);  // RVA: 0x4D3410
    bool <ForEachEquippedEffect>b__1(ItemData* item);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass31_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcStaminaCostMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x55A270
};

// Namespace: <global>
class <>c__DisplayClass32_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcStaminaRestRegenMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x55A3B0
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcBonusDropChance>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564570
};

// Namespace: <global>
class <>c__DisplayClass34_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcEnemyCritDamageReductionMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5646B0
};

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcBelowHpEffects>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5647F0
};

// Namespace: <global>
class <>c__DisplayClass37_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnCritHealAmount>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x565D30
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float pct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnCritLifesteal>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x565FE0
};

// Namespace: <global>
class <>c__DisplayClass39_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcOnParryHealAmount>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5662D0
};

// Namespace: <global>
class <>c__DisplayClass40_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float pct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcFirstHitAbsorbFraction>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566580
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcFirstHitCounterDamage>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566B60
};

// Namespace: <global>
class <>c__DisplayClass42_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> list; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    void <CalcEveryNHitsTaken>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566E10
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class StatsCalculator
    {
    public:
        // Static fields
        // static int32_t BaseHP;
        // static int32_t BaseATK;
        // static int32_t BaseDEF;
        // static float BaseCRIT;
        // static float BasePARRY;
        // static float AtkPerPoint;
        // static float HpPerPoint;
        // static float DefPerPoint;
        // static float CritPercentPerPoint;
        // static float ParryPercentPerPoint;
    
    
        // Methods
        static PlayerStats GetBaseStats(int32_t level);  // RVA: 0x555A50
        static PlayerStats GetTotalStats(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555C00
        static void ApplySynergyBonuses(Il2CppString* effectDescription, System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> elementalCounts, PlayerStats stats);  // RVA: 0x552E50
        static void ApplyCrossSynergyBonuses(Il2CppString* effectDescription, System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> elementalCounts, System.Collections.Generic.HashSet<System.String> equippedItemNames, bool hasDualWield, bool hasShield, int32_t categoryCount, PlayerStats stats);  // RVA: 0x552610
        static ElementCategory GetCategoryFromName(Il2CppString* name);  // RVA: 0x555A80
        static int32_t GetPowerScore(PlayerStats stats);  // RVA: 0x555BA0
        static int32_t CalcRegenPerFight(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554C40
        static System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> CalcTimedRegen(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5554D0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> CalcEveryNSecTemporaryBuffs(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553D30
        static Int32[][] CalcEveryNSecMaxStack(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> everyNSecTempBuffs);  // RVA: 0x553BF0
        static System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> CalcEveryNAttacks(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553840
        static System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> CalcEveryNCrits(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553980
        static int32_t CalcOnCritBonusDamage(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554280
        static System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> CalcOnCritPendingMods(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5547C0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnCritEnemyDefDebuff(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5544A0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnCritDefTimed(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554370
        static System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> CalcOnParryPendingMods(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554B10
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnParryDefTimed(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5548F0
        static int32_t CalcFirstHitHeal(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5540A0
        static float CalcFirstHitPermanentAtkPct(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554190
        static void ForEachEquippedEffect(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, System.Action<AutoBattle.Data.ItemData,System.String> callback);  // RVA: 0x555630
        static float CalcStaminaCostMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555290
        static float CalcStaminaRestRegenMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5553C0
        static float CalcBonusDropChance(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553610
        static float CalcEnemyCritDamageReductionMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553710
        static System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> CalcBelowHpEffects(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5534E0
        static int32_t CalcOnCritHealAmount(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5545D0
        static float CalcOnCritLifesteal(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5546C0
        static int32_t CalcOnParryHealAmount(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554A20
        static float CalcFirstHitAbsorbFraction(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553E90
        static int32_t CalcFirstHitCounterDamage(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553FB0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> CalcEveryNHitsTaken(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553AC0
        static void .cctor();  // RVA: 0x556940
    };

    // Namespace: AutoBattle.Core
    class TransparentWindowHelper : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Camera* targetCamera; // 0x0020
    
        // Methods
        void OnEnable();  // RVA: 0x5611D0
        void OnDisable();  // RVA: 0x561160
        void OnEndCameraRendering(ScriptableRenderContext context, Camera* camera);  // RVA: 0x561270
        void .ctor();  // RVA: 0x4AEF40
    };

    // Namespace: AutoBattle.Core
    class UIAudioManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static UIAudioManager* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip* clickClip; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* hoverClip; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Vector2 hoverPitchRange; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioSource* uiSource; // 0x0038
    
        // Methods
        static UIAudioManager* get_Instance();  // RVA: 0x567B60
        static void set_Instance(UIAudioManager* value);  // RVA: 0x567BA0
        void Awake();  // RVA: 0x5674D0
        void EnsureSourceDefaults();  // RVA: 0x5677C0
        void EnsureMixerRouting();  // RVA: 0x567640
        void PlayClick();  // RVA: 0x567990
        void PlayHover();  // RVA: 0x567A60
        void .ctor();  // RVA: 0x567B40
    };

} // namespace AutoBattle.Core

// Namespace: <global>
struct WindowSize
{
public:
    // Static fields
    // static WindowSize Small;
    // static WindowSize Medium;
    // static WindowSize Large;
    // static WindowSize XLarge;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class WindowManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static WindowManager* <Instance>k__BackingField;
        // static float GAME_FRAME_REF_WIDTH;
        // static float GAME_FRAME_REF_HEIGHT;
        // static int32_t SNAP_MARGIN_PX;
        // static Vector2Int[][] SizePresets;
        // static Color ColorKey;
    
        uint8_t pad_0000[0x20]; // 0x0000
        WindowSize <CurrentSize>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<AutoBattle.Core.WindowManager.WindowSize> OnWindowSizeChanged; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t <SidePanelWidth>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t <TooltipOverflowWidth>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        System.Action<System.Int32> OnSidePanelWidthChanged; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool <IsTransparencyEnabled>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        RectTransform* <GameFrameRoot>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool isInitialized; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        UniWindowController* _uniWin; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        CanvasScaler* _canvasScaler; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        CanvasScaler* _worldCanvasScaler; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        int32_t _currentMonitorIdx; // 0x0070
    
        // Methods
        static WindowManager* get_Instance();  // RVA: 0x569980
        static void set_Instance(WindowManager* value);  // RVA: 0x569B70
        WindowSize get_CurrentSize();  // RVA: 0x569960
        void set_CurrentSize(WindowSize value);  // RVA: 0x569B50
        void add_OnWindowSizeChanged(System.Action<AutoBattle.Core.WindowManager.WindowSize> value);  // RVA: 0x569760
        void remove_OnWindowSizeChanged(System.Action<AutoBattle.Core.WindowManager.WindowSize> value);  // RVA: 0x569AA0
        int32_t get_SidePanelWidth();  // RVA: 0x5699D0
        void set_SidePanelWidth(int32_t value);  // RVA: 0x569BF0
        int32_t get_TooltipOverflowWidth();  // RVA: 0x5699E0
        void set_TooltipOverflowWidth(int32_t value);  // RVA: 0x569C00
        int32_t get_EffectiveLeftExtension();  // RVA: 0x569970
        void add_OnSidePanelWidthChanged(System.Action<System.Int32> value);  // RVA: 0x5696B0
        void remove_OnSidePanelWidthChanged(System.Action<System.Int32> value);  // RVA: 0x5699F0
        bool get_IsTransparencyEnabled();  // RVA: 0x536F10
        void set_IsTransparencyEnabled(bool value);  // RVA: 0x569BE0
        RectTransform* get_GameFrameRoot();  // RVA: 0x549810
        void set_GameFrameRoot(RectTransform* value);  // RVA: 0x569B60
        RectTransform* get_CanvasRect();  // RVA: 0x569810
        void Awake();  // RVA: 0x567E70
        void Start();  // RVA: 0x568F20
        void InitializeWindow();  // RVA: 0x568710
        float get_CurrentScaleFactor();  // RVA: 0x5698D0
        void Update();  // RVA: 0x4B4640
        void CycleSize();  // RVA: 0x5685B0
        void SetSize(WindowSize size);  // RVA: 0x568C10
        void ApplyGameFrameScale();  // RVA: 0x567C00
        void SetAlwaysOnTop(bool onTop);  // RVA: 0x568B50
        void SnapToCorner(int32_t corner);  // RVA: 0x568CD0
        void ClampGameFrameToCanvas();  // RVA: 0x5683A0
        void ClampGameFrameContentToCanvas();  // RVA: 0x568080
        int32_t get_CurrentMonitorIndex();  // RVA: 0x5698C0
        bool TryMoveToAdjacentMonitor(Vector2 direction, Vector2 outOppositeEdgePos);  // RVA: 0x568F30
        Rect GetCurrentMonitorRect();  // RVA: 0x5686B0
        void EnableColorKeyTransparency();  // RVA: 0x4B4640
        void SetSidePanelExtension(int32_t panelWidth);  // RVA: 0x568BE0
        void SetTooltipExtension(int32_t overflowPx);  // RVA: 0x568CC0
        void SetTooltipExtension(int32_t overflowPx, bool rightSide);  // RVA: 0x568CC0
        void RetractTooltipExtensionDeferred();  // RVA: 0x568B40
        Vector2Int GetWindowPixelSize();  // RVA: 0x5686E0
        Vector2Int GetWindowPosition();  // RVA: 0x55A730
        bool IsGameFrameInUpperHalfOfScreen();  // RVA: 0x568AA0
        void .ctor();  // RVA: 0x5696A0
        static void .cctor();  // RVA: 0x569580
    };

    // Namespace: AutoBattle.Core
    class XPSystem
    {
    public:
        // Static fields
        // static int32_t MaxLevel;
        // static float XPMultiplierFullGame;
        // static float XPMultiplierDemo;
        // static float XPExponent;
        // static float XPScalingDecay;
    
    
        // Methods
        static float get_CurrentMultiplier();  // RVA: 0x569D20
        static int32_t XPForLevel(int32_t level);  // RVA: 0x569C70
        static int32_t XPNeededForNextLevel(int32_t currentLevel);  // RVA: 0x569CE0
        static int32_t ScaleXP(int32_t baseXP, int32_t enemyLevel, int32_t playerLevel);  // RVA: 0x569C10
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c__DisplayClass50_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquippedItemInfo* ei; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC410
    bool <BuildSyntheticEnemyState>b__0(ItemData* d);  // RVA: 0x567440
};

// Namespace: <global>
class <EndBattle>d__52
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CombatManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyState* enemy; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool playerWon; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t remainingPlayerHp; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    BattleScreenUI* <battleUI>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float <pollWaited>5__3; // 0x0040

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x5613A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5633A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <RunCombat>d__47
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EnemyState* enemy; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayerStats playerStats; // 0x0030
    uint8_t pad_0031[0x17]; // 0x0031
    BattleScreenUI* <battleUI>5__2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int32_t <playerHp>5__3; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t <enemyHp>5__4; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool <isPlayerTurn>5__5; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    PlayerStats <playerMaxStats>5__6; // 0x005C
    uint8_t pad_005D[0x13]; // 0x005D
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> <timedRegens>5__7; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float <combatElapsed>5__8; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Single[][] <nextRegenAt>5__9; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> <enemyTimedRegens>5__10; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Single[][] <enemyNextRegenAt>5__11; // 0x0090

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x563440
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x564050
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

// Namespace: <global>
class <StartPvPBattleCoroutine>d__33
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CombatManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t <myPS>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float <timeout>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <elapsed>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6730
    void System.IDisposable.Dispose();  // RVA: 0x4B4640
    bool MoveNext();  // RVA: 0x564090
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B66E0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x564530
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B66E0
};

namespace AutoBattle.Combat
{

    // Namespace: AutoBattle.Combat
    class CombatManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameManager* gameManager; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Coroutine* combatCoroutine; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isInCombat; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        EnemyState* currentCombatEnemy; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        CombatRuntimeEffects* activeRuntimeEffects; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        CombatRuntimeEffects* enemyRuntimeEffects; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t currentEnemyHpTracked; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t currentEnemyMaxHpTracked; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        System.Action<AutoBattle.Combat.EnemyState> OnCombatStart; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Action<AutoBattle.Combat.CombatTurnResult> OnCombatTurn; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Action<AutoBattle.Combat.CombatResult> OnCombatEnd; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Action<System.String,System.String> OnBattleLogMessage; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<System.Int32> OnHealTick; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.Int32> OnEnemyHealTick; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        String[][] pvpEnemyNames; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        bool pvpQueued; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        int32_t pvpSavedHp; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        bool friendlyPvPStartedFromHome; // 0x0098
    
        // Methods
        CombatRuntimeEffects* get_ActiveRuntimeEffects();  // RVA: 0x54F3D0
        CombatRuntimeEffects* get_EnemyRuntimeEffects();  // RVA: 0x549810
        int32_t get_CurrentEnemyHp();  // RVA: 0x55ECB0
        int32_t get_CurrentEnemyMaxHp();  // RVA: 0x55ECC0
        void Start();  // RVA: 0x55E610
        void OnEnable();  // RVA: 0x55B7D0
        void OnDisable();  // RVA: 0x55B7B0
        void SubscribeEvents();  // RVA: 0x55E780
        void UnsubscribeEvents();  // RVA: 0x55E8C0
        void StartPvEBattle();  // RVA: 0x55E230
        void StartArenaBattle();  // RVA: 0x55DE10
        EnemyState* PickEnemyForArena(int32_t wave);  // RVA: 0x55BC00
        void StartPvPBattle();  // RVA: 0x55E580
        IEnumerator* StartPvPBattleCoroutine();  // RVA: 0x55E510
        void StartFriendlyPvP(PlayerSnapshot* friendSnapshot);  // RVA: 0x55E080
        EnemyState* PickEnemyForBattle(SectorData* sector, int32_t sectorEnemyIndex);  // RVA: 0x55C180
        int32_t PickCategoryByGaussian(int32_t categoryCount, float sectorProgress);  // RVA: 0x55B8E0
        EnemyColor PickColorByProgress(float sectorProgress);  // RVA: 0x55BB30
        EnemyColor PickArenaColor(float waveProgress);  // RVA: 0x55B840
        float GetDropChanceByColor(EnemyColor color);  // RVA: 0x55B590
        EnemyState* GeneratePvPEnemy();  // RVA: 0x55B1D0
        void StartCombat(EnemyState* enemy);  // RVA: 0x55DF10
        void StopCombat();  // RVA: 0x55E700
        void ResolvePvPAbandon(EnemyState* enemy);  // RVA: 0x55D890
        void HandleBattleStateChange(bool isActive);  // RVA: 0x55B7A0
        IEnumerator* RunCombat(PlayerStats playerStats, EnemyState* enemy);  // RVA: 0x55DD70
        ElementCategory GetPlayerWeaponElement();  // RVA: 0x55B6B0
        ElementCategory GetPlayerWeapon2Element();  // RVA: 0x55B5C0
        PlayerState* BuildSyntheticEnemyState(System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> equippedItems);  // RVA: 0x55A820
        CombatTurnResult* ResolveAttack(PlayerStats playerStats, EnemyState* enemy, int32_t playerHp, int32_t enemyHp, bool isAttacker, int32_t playerMaxHp);  // RVA: 0x55C570
        IEnumerator* EndBattle(bool playerWon, EnemyState* enemy, int32_t remainingPlayerHp);  // RVA: 0x55AD40
        int32_t CalculatePvEXp(EnemyState* enemy, bool isDefeat);  // RVA: 0x55AC80
        ItemInstance* GenerateDropItem(EnemyState* enemy);  // RVA: 0x55AFA0
        ItemInstance* GenerateArenaMilestoneDrop();  // RVA: 0x55ADF0
        ItemInstance* GenerateSectorCompletionBonus();  // RVA: 0x55B430
        void .ctor();  // RVA: 0x55EA30
    };

    // Namespace: AutoBattle.Combat
    class CombatResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool playerWon; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t xpGained; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        ItemInstance* droppedItem; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t remainingPlayerHp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool sectorCleared; // 0x0024
        bool isPvP; // 0x0025
        uint8_t pad_0026[0x2]; // 0x0026
        Il2CppString* enemyName; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t rpDelta; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t healAmount; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ItemInstance* sectorBonusItem; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool leveledUp; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t newLevel; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t levelsGained; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ItemInstance* levelUpItem; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool isArenaMode; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t arenaWave; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t arenaKillCount; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool arenaWaveMilestone; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t arenaMaxWave; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool arenaActivated; // 0x006C
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Combat
    class PendingAttackMod
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t remaining; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float bonusDamagePct; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t bonusDamageFlat; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float ignoreEnemyDefPct; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float overrideCritPct; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float critBonusPct; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        bool ignoreDefFully; // 0x0028
        bool tripleDamage; // 0x0029
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Combat
    class EveryNAttacksEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t everyN; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PendingAttackMod* modTemplate; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Combat
    class EveryNCritsEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t everyN; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PendingAttackMod* modTemplate; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Combat
    class CombatRuntimeEffects
    {
    public:
        // Static fields
        // static int32_t SUDDEN_DEATH_THRESHOLD_TURNS;
        // static int32_t SUDDEN_DEATH_ESCALATION_TURNS;
        // static float SUDDEN_DEATH_ESCALATION_PCT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> belowHpEffects; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t onCritHealAmount; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float onCritLifestealPct; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t onParryHealAmount; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float firstHitAbsorbFraction; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t firstHitCounterDamage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> everyNHitsTaken; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float enemyCritDamageMultiplier; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> everyNSecTempBuffs; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Single[][] nextTempBuffAt; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Int32[][] currentTempBuffStack; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Int32[][] everyNSecMaxStack; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t tempBuffAtk; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t tempBuffDef; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t tempBuffHp; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float tempBuffCritPct; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float tempBuffParryPct; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> pendingAttackMods; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> everyNAttacksEffects; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Int32[][] nextEveryNAttacksFireAt; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> everyNCritsEffects; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Int32[][] nextEveryNCritsFireAt; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> enemyDefDebuffs; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onCritEnemyDefDebuffDescriptors; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        int32_t onCritBonusDamage; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> onCritPendingModTemplates; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> onParryPendingModTemplates; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> tempDefTimedBuffs; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onParryDefTimedDescriptors; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onCritDefTimedDescriptors; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        int32_t firstHitHeal; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float firstHitPermanentAtkPct; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool firstHitPermanentAtkActive; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        int32_t playerAttacksMade; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        int32_t playerCritsLanded; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        int32_t playerHitsTaken; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        bool firstHitConsumed; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float combatElapsedSec; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        Int32[][] hitTriggerCounters; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        bool suddenDeathArmed; // 0x0108
        bool suddenDeathActive; // 0x0109
        bool isPvP; // 0x010A
        uint8_t pad_010B[0x1]; // 0x010B
        int32_t turnsElapsed; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        float permanentDefAcquiredPct; // 0x0110
    
        // Methods
        static CombatRuntimeEffects* BuildForCombat(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, bool isPvP);  // RVA: 0x55EEC0
        PendingAttackMod* AggregatePendingMods();  // RVA: 0x55ECD0
        void ConsumePendingMods();  // RVA: 0x55F7B0
        void TickEveryNAttacksAndPush();  // RVA: 0x560B60
        void TickEveryNCritsAndPush();  // RVA: 0x560CE0
        void PushOnCritPendingMods();  // RVA: 0x5602B0
        void PushOnParryPendingMods();  // RVA: 0x5604F0
        static PendingAttackMod* CloneModTemplate(PendingAttackMod* src);  // RVA: 0x55F710
        void PushOnCritEnemyDefDebuff();  // RVA: 0x5600D0
        int32_t GetActiveEnemyDefReduction();  // RVA: 0x55F880
        void PushTimedDefBuffOnParry();  // RVA: 0x560910
        void PushTimedDefBuffOnCrit();  // RVA: 0x560730
        int32_t GetActiveTimedDefBuff();  // RVA: 0x55F970
        void TickTemporaryBuffs();  // RVA: 0x560E60
        System.ValueTuple<System.Single,System.Single,System.Single,System.Int32,System.Single> GetBelowHpAggregate(int32_t currentHp, int32_t maxHp);  // RVA: 0x55FA60
        System.ValueTuple<System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.ValueTuple<System.Boolean,System.Single>> GetBelowHpExtendedAggregate(int32_t currentHp, int32_t maxHp);  // RVA: 0x55FCF0
        Il2CppString* CheckEveryNHitsTakenAndConsume();  // RVA: 0x55F520
        float StepTurnAndGetDamageMultiplier();  // RVA: 0x560AF0
        void .ctor();  // RVA: 0x5610E0
    };

    // Namespace: AutoBattle.Combat
    class CombatTurnResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isPlayerAttacking; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* attackerName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* defenderName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t damage; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool isCrit; // 0x002C
        bool isParried; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        int32_t attackerHpAfter; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t defenderHpAfter; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ElementCategory weaponElement; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        ElementCategory weapon2Element; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t healFromEffect; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool suddenDeathActive; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t counterAttackDamage; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t enemyHealFromEffect; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t enemyCounterAttackDamage; // 0x0050
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

    // Namespace: AutoBattle.Combat
    class EnemyState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* categoryName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* icon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        EnemyColor color; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t hp; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t maxHp; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float atk; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float def; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float crit; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float parry; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t level; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool isPvP; // 0x0048
        bool isFriendlyPvP; // 0x0049
        uint8_t pad_004A[0x2]; // 0x004A
        int32_t xpWin; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t xpLose; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float dropChance; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> pvpEquippedItems; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* pvpPlayFabId; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        int64_t pvpLastUpdatedTicks; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        int32_t pvpCharacterType; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float pvpBattleTime; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        int32_t pvpRankingPoints; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        ElementCategory pvpWeaponElement; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        ElementCategory pvpWeapon2Element; // 0x0080
    
        // Methods
        void .ctor();  // RVA: 0x4BC410
    };

} // namespace AutoBattle.Combat

// Namespace: <global>
struct __StaticArrayInitTypeSize=12
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=16
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=20
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=32
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=4404
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=5411
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=4404 203C0E7D8EBA25A3C757FF19F623D5323528B7386BBD32E6A08B3E1FC9518A6A;
    // static __StaticArrayInitTypeSize=20 376326C78425410A24361EBE9BEAC70517D3FD3FA0C47072BFA401ACD395F04A;
    // static __StaticArrayInitTypeSize=5411 3BF0F59E28BFCCE649F3FD019CE9B12FFF96934FA63D803E446AFAB59F045F12;
    // static __StaticArrayInitTypeSize=32 3CC2A930571C60EE0CFE0686365C3093E362E6833C5C7F1FD4F36C687C78BBA5;
    // static __StaticArrayInitTypeSize=12 6AB9C293C18AC9C469B52BD1BB0A68DA18711BA94E45EA6E0BF79CE96CFEFD0F;
    // static __StaticArrayInitTypeSize=12 8BC5D7ED3909D5F0600333A11D97106D1724D34B786E92D842690E9E3052E409;
    // static __StaticArrayInitTypeSize=16 BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;


    // Methods
    static uint32_t ComputeStringHash(Il2CppString* s);  // RVA: 0x5633E0
};

