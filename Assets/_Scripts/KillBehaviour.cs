using UnityEngine;
using System.Collections;

public class KillBehaviour : MonoBehaviour {

	private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("DeathPlane"))
        {
            Destroy(this.gameObject);
        }
    }
}
